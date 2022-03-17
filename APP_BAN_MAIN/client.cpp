#include "client.h"
#include "compte.h"
#include <iostream>



using namespace std;


client::client()
{
	this->age = 0;
	this->matr = 0;
	this->nom = "NULL";
	this->li_cpt = vector <compte*>();

}

client::client(int matr, string nom, float age)
{

	this->age = age;
	this->matr = matr;
	this->nom = nom;
	this->li_cpt = vector <compte*>();


}

void client::affich()
{
	cout << endl;
	cout << "le matricule du personne : " << this->matr << endl;
	cout << "le nom du personne : " << this->nom << endl;
	cout << "l'age du personne : " << this->age << endl;
	cout << "les comptes possede par ce client :" << endl;

	//////////////////////////////////////////////////////

	for (int i = 0; i < this->li_cpt.size(); i++)
	{

		this->li_cpt[i]->Consulter_cpts(i);

		
	}
}

void client::remplissage(compte* cpt)
{

	this->li_cpt.push_back(cpt);

}

client::~client()
{

	this->li_cpt.clear();
}
