#include "operation.h"
#include"devise.h"
#include"date.h"

operation::operation()
{

	this->dte = date();
	this->libelle = "null";
	this->montant = devise();
	this->num_operation = 0;

}

operation::operation(int num, date dte, devise mtt, string lib)
{
	this->dte = dte;
	this->libelle = lib;
	this->montant = mtt;
	this->num_operation = num;

}

void operation::afficher()
{
	this->dte.afficher();
	cout << "le libelle " <<  this->libelle << endl;
	cout << "le montant retiret ";
	this->montant.afficher_nbr();
	cout << endl;
	cout << "le num opr " << this->num_operation << endl;
}
