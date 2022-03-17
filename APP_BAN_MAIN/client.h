#pragma once
#include <iostream>
#include <vector>

class compte;

using namespace std;




class client
{
private:
	int  matr;
	string nom;
	float age;
	vector<compte*>li_cpt;

public:
	client();
	client(int  matr, string nom, float age);
	void affich();
	virtual void remplissage(compte* cpt);
	~client();
};