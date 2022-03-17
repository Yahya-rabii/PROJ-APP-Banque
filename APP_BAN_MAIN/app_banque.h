#pragma once
#include <iostream>
#include <vector>
#include "compte.h"
using namespace std;

class app_banque
{
	vector <compte*> tab_C;
public:
	app_banque();
	~app_banque();
	void Ajouter_compte(compte* cpt);
	
	virtual void afficher() const;

	compte& operator [](int ind);
};