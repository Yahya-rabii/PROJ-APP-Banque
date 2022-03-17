#include "compte_pay.h"

compte_pay::compte_pay(int Num_compte, client* propor, devise sold, double taux):compte(Num_compte, propor, sold)
{
	this->taux_op = taux;
}

bool compte_pay::retirer_sld(devise somme)
{
	compte_pay p();
	devise val_inter;
	
	if (typeid(this).name() == typeid(&p).name()) {

		this->compte::retirer_sld(somme);
		val_inter = somme * taux_op / 100;
		this->retirer_sld(val_inter);
		return true;
	}


}

void compte_pay::Consulter()
{

	compte_pay p();

	if (typeid(*this).name() == typeid(p).name())
    this->compte::Consulter();
	
	cout << "le taux op est :" << this->taux_op << endl;
}
/*
void compte_pay::Consulter_taux()
{
	cout << " le taux op est :" << this->taux_op << endl;

}*/

void compte_pay::dispos_sld(devise somme)
{

	this->compte::dispos_sld(somme);

}

