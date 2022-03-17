#include "compte_courant.h"



compte_courant::compte_courant(int Num_compte, client *propor, devise sold, devise decou):compte(Num_compte, propor, sold)
{
    this->decouvert = decou;
}

void compte_courant::Consulter()
{
	this->compte::Consulter();
	cout << "le decouvert est :";
	this->decouvert.afficher_nbr();
    cout <<endl;
}

bool compte_courant::retirer_sld(devise somme)
{
	if ( this->sold - somme >= this->decouvert )
	{
		this->sold - somme;
		return true;
	}
	else
	{
		return false;
	}
}

void compte_courant::dispos_sld(devise somme)
{

	this->compte::dispos_sld(somme);

}

