#pragma once
#include "compte.h"


class compte_courant: public compte
{


private:

	devise decouvert;

public:

	compte_courant(int Num_compte, client *propor, devise sold, devise decou);
	void Consulter() override;

	bool retirer_sld(devise somme) override;
	void dispos_sld(devise  somme) override;

};






