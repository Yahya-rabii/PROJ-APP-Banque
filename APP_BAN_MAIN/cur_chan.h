#pragma once
#include <iostream>
#include <curl/curl.h>
#include <Windows.h>

class RestClient
{
public:
	RestClient(void* currencyAddress, std::string currencyAPI = "", unsigned int delay = 0);
	void RunAsyncLoop();
private:
	CURL* hCurl;
	std::string currencyAPI;
	void* currencyAddress;
	unsigned int delay;
	HANDLE hThread;
	static void ThreadFunc(RestClient* currentClient);
	unsigned int errCount;

	static size_t write_callback(char* data, size_t size, size_t nmemb, void* userp);
};

