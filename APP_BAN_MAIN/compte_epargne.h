#pragma once
#include "compte.h"
#include "compte_courant.h"

class compte_epargne :virtual public compte
{

private:
	double taux_d;


public:

	compte_epargne(int Num_compte, client *propor, devise sold, double taux);
	void cal_interet();
	bool retirer_sld(devise somme) override;

	void Consulter() override;

	void dispos_sld(devise  somme) override;
    bool transferer_sold(compte_courant& cpt, devise  somme) ;//////////////////////////
};
