#pragma once
#include"compte_epargne.h"
#include "compte_pay.h"


class compte_epargne_payant :public compte_epargne, public compte_pay
{
public:
	compte_epargne_payant(int Num_compte, client* propor, devise sold, double taux , double taux_op);

	bool retirer_sld(devise somme) override;
	void Consulter() override;
	void dispos_sld(devise  somme) override;


private:

};
