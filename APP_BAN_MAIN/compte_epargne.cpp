#include "compte_epargne.h"

#include <assert.h>
#include "compte.h"
#include "devise.h"
#include "client.h"

compte_epargne::compte_epargne(int Num_compte, client *propor, devise sold, double taux):compte(Num_compte, propor, sold)
{
	assert(taux >= 0 && taux <= 100);
	this->taux_d = taux;
}

void compte_epargne::cal_interet()
{
	this->compte::calc_interet(this->taux_d);
}

bool compte_epargne::retirer_sld(devise somme)
{
	compte_epargne p();

	if (typeid(this).name() == typeid(&p).name()) {
		
		if (this->compte::plus_que_mot(somme))
		{

			return 	this->compte::retirer_sld(somme);


		}

		else
		{
			return false;
		}
	}
}

void compte_epargne::Consulter()
{
	compte_epargne p();

	if (typeid(*this).name() == typeid(p).name())
	this->compte::Consulter();

	cout << "le taux est :" << this->taux_d << endl;

}

void compte_epargne::dispos_sld(devise somme)
{
	this->compte::dispos_sld(somme);
}




bool compte_epargne::transferer_sold(compte_courant& cpt, devise somme) ////////////////////:
{
	if (this->sold >= somme) {
		cpt.retirer_sld(somme);
		this->sold + somme;
		return true;

	}
	else {

		return false;
	}
}
