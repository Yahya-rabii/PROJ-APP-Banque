#include "devise.h"
#include "Mad.h"
#include <iostream>
using namespace std;

devise::devise()
{
	this->val = 0;
}

devise::devise(double val)
{
	this->val = val;
}

void devise::afficher_nbr() const
{

	cout << "le Solde : " << this->val << endl;

}


double devise::mad_to_$(double somme)
{
	Mad m;
	double val;
	val = m.dmad_to_$(somme);
	return val;
}

double devise::mad_to_€(double somme)
{
	Mad m;
	double val;
	val = m.dmad_to_€(somme);
	return val;
}


bool devise::operator >= (const devise &M)
{
	if (this->val >= M.val) {
		return true;
	}

	else
	{
		return false;
	}
}

devise devise::operator-(const devise& somme)
{
	if (this->val >= somme.val) {
		return this->val -= somme.val; // this->Solde = this->Solde - s
		 
	}

}

devise devise::operator-= (const devise &M)
{
	if (this->val >= M.val) {
		return this->val -= M.val; // this->Solde = this->Solde - s

	}

}

devise devise::operator+(const devise& somme)
{
	
	return this->val += somme.val; //  this->Solde = this->Solde + x ;


}

devise devise::operator/(int val)
{
	return this->val / val;
}

devise devise::operator* (double val)
{
	return this->val * val;
}



void devise::operator=(const devise& M)
{

	this->val = M.val;


}
