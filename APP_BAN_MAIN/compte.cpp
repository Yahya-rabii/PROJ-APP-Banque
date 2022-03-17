#include "compte.h"
#include "client.h"
#include <assert.h>
#include <iostream>
#include <vector>

using namespace std;

compte::compte(int Num_compte, client *propor, devise sold)
{
	this->num_compte = Num_compte;
	this->propor = propor;
	this->sold = sold;
	this->historique = vector<operation*>();
}

void compte::Consulter() 
{
	string choice;

	cout << " what do you want to see ALL / Sold : " << endl;
	cin >> choice;

	if (choice == "ALL" || choice == "all" || choice == "All")
	{

		cout << "le num compte : " << this->num_compte << endl;
		cout << "le prop : ";
		this->propor->affich();
		cout << endl;


		cout << "le Solde : ";
		this->sold.afficher_nbr();
		cout << endl;
		///////////////////////////////////////////////////////////
		for (int i = 0; i < this->historique.size(); i++)
		{
			cout << i << " -> " ;
			this->historique[i]->afficher();
			cout << endl;
		}
	}
	else
	{
		cout << "le Solde : ";
		this->sold.afficher_nbr();
		cout << endl;

	}
}

void compte::Consulter_cpts(int i)
{
	
	cout << "cpt " << i <<  " : " << this->num_compte << "| sld : " ;
	this->sold.afficher_nbr();
	cout << endl;
}

bool compte::retirer_sld(devise somme)
{
	if (this->sold >= somme) {
		date dt(11, 10, 2022);
		operation *op = new operation(this->historique.size() + 1, dt, somme, "-");
		
		this->historique.push_back(op);
		this->sold - somme;
		return true;
		
		
	}
	else
	{
		return false;
	}
}

void compte::dispos_sld(devise somme)
{

	date dt(11, 10, 2022);
	operation* op = new operation(this->historique.size() + 1, dt, somme, "+");

	this->historique.push_back(op);

	this->sold + somme;

}

bool compte::transferer_sld(compte& cpt, devise somme)
{
	if (this->sold >= somme) {

		cpt.sold-somme;
		this->sold+somme;
		return true;

	}
	else {

		return false;
	}

}

void compte::change_curency()
{
	int choice;
	devise d;
	double val;
	double somme;

	cout << "1 : Mad -> $ // ";
	cout << "2 : Mad -> € : ";
	cin >> choice;
	cout << endl;
	if (choice == 1)
	{

		d = this->sold;
		cout << "donne la somme : ";
		cin >> somme;
		val = d.mad_to_$(somme);
		cout << "la somme en $ -> " << val << endl;

	}
	else
	{

		d = this->sold;
		cout << "donne la somme : ";
		cin >> somme;
		val = d.mad_to_€(somme);
		cout << "la somme en € -> " << val << endl;

	}


}


void compte::calc_interet(double sm)
{

	this->sold = this->sold * sm;


}



bool compte::plus_que_mot(devise sm)
{
	if (this->sold / 2 >= sm )
	{
		return true;
	}

	else
	{
		return false;
	}
}