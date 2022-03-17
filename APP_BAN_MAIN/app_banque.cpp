#include "app_banque.h"
app_banque::app_banque()
{
	this->tab_C = vector<compte*>();
}

app_banque::~app_banque()
{
	this->tab_C.clear();
}

void app_banque::Ajouter_compte(compte* cpt)
{
	this->tab_C.push_back(cpt);
}

void app_banque::afficher() const
{
	for (int i = 0; i < this->tab_C.size(); i++)
	{

		this->tab_C[i]->Consulter();
	}
	

}

compte& app_banque::operator[](int ind)
{
	return *this->tab_C[ind];
}
