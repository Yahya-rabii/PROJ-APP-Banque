#pragma once
#include <vector>
#include <iostream>
#include "devise.h"
#include "operation.h"
#include "client.h"


using namespace std;

class compte
{

protected:
	int num_compte;
	client *propor;
	devise sold;
	vector <operation*> historique;

public:
	compte(int Num_compte, client *propor, devise sold);

	virtual void Consulter() ;
	void Consulter_cpts(int i) ;
	
	virtual bool retirer_sld(devise somme);
	virtual void dispos_sld(devise  somme);
	bool transferer_sld(compte& cpt, devise somme);
	void change_curency();


	void calc_interet(double sm);
	bool plus_que_mot(devise sm);



};