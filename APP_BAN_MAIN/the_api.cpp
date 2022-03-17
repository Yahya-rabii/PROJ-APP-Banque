#include "the_api.h"
#include <cstdlib>

RestClient::RestClient(void* currencyAddress, std::string currencyAPI, unsigned int delay)
{
	if (currencyAPI.empty()) this->currencyAPI = "https://xeso.site/api/v1/currency/usd";
	else this->currencyAPI = currencyAPI;

	if (delay == 0) this->delay = 5000;
	else this->delay = delay;

	if (!currencyAddress) {
		std::cerr << "No valid currencyAddress pointer specified at -> RestClient::RestClient(void* currencyAddress, std::string currencyAPI, unsigned int delay)\n";
		exit(0x02);
	}

	this->errCount = 0;
	this->currencyAddress = currencyAddress;
	this->hCurl = curl_easy_init();

	if (!this->hCurl) {
		std::cerr << "Error : curl_easy_init() failed \n";
		exit(0x01);
	}

	curl_easy_setopt(hCurl, CURLOPT_URL, this->currencyAPI.c_str());
	curl_easy_setopt(hCurl, CURLOPT_FOLLOWLOCATION, 1L);

	curl_easy_setopt(hCurl, CURLOPT_WRITEFUNCTION, write_callback);
	curl_easy_setopt(hCurl, CURLOPT_WRITEDATA, this->currencyAddress);

	this->hThread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)RestClient::ThreadFunc, this, CREATE_SUSPENDED, nullptr);
}

void RestClient::RunAsyncLoop()
{
	if (ResumeThread(this->hThread) == (DWORD)-1) {
		std::cerr << "Error : Could not start thread at RestClient::RunAsyncLoop() \n";
		exit(GetLastError());
	}
}

[[noreturn]] void RestClient::ThreadFunc(RestClient* currentClient)
{
	while (true)
	{
		if (curl_easy_perform(currentClient->hCurl) != CURLE_OK)
		{
			currentClient->errCount++;
			if (currentClient->errCount > 2) {
				std::cerr << "Error : Could not get the price after 3 attempts \n";
				exit(0x04);
			}
			std::cerr << "And error occured during the refresh, will try again in " << (currentClient->delay / 1000) << " secs\n";
		}
		else
			currentClient->errCount = 0;
		Sleep(currentClient->delay);
	}
}

size_t RestClient::write_callback(char* data, size_t size, size_t nmemb, void* userp)
{
	*(double*)userp = atof(data);
	return size * nmemb;
}