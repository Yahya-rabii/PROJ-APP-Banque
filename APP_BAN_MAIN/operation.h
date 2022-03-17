#pragma once
#include <iostream>
#include "date.h"
#include "devise.h"


using namespace std;

class operation
{

private:
	int num_operation;
	date dte;
	devise montant;
	string libelle;

public:

	operation();	
	operation(int num, date dte, devise mtt, string lib);
	void afficher();


};
