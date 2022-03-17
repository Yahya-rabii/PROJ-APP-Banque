#pragma once
#include "compte.h"


class compte_pay :virtual public compte
{


private:

	double taux_op;

public:
	compte_pay(int Num_compte, client *propor, devise sold,double taux );
	bool retirer_sld(devise somme) override;
	void Consulter() override;
	//void Consulter_taux();

	void dispos_sld(devise  somme) override;


};
