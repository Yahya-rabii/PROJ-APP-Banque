#include "compte_epargne_payant.h"



compte_epargne_payant::compte_epargne_payant(int Num_compte, client *propor, devise sold, double taux, double taux_op)
	:compte(Num_compte, propor, sold),compte_epargne(Num_compte, propor, sold,taux),compte_pay(Num_compte, propor, sold,taux_op)
{

}

bool compte_epargne_payant::retirer_sld(devise somme)
{

	this->compte::retirer_sld(somme);
	this->compte_pay::retirer_sld(somme);
	this->compte_epargne::retirer_sld(somme);
	return true;
}

void compte_epargne_payant::Consulter()
{
	this->compte::Consulter();
	this->compte_pay::Consulter();
	this->compte_epargne::Consulter();

	
	
	
	//this->compte_pay::Consulter_taux();
		
}


void compte_epargne_payant::dispos_sld(devise somme)
{
	this->compte::dispos_sld(somme);
}

