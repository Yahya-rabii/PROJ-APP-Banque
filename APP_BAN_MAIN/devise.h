#pragma once


class devise
{


private:
	double val;


public:
	devise() /*= delete*/;
	devise(double val) ;

	void afficher_nbr()const;



	double mad_to_$(double somme);
	double mad_to_€(double somme);



	bool operator >= (const devise &M);
	devise operator - (const devise& M);
	devise operator -= (const devise &M);
	devise operator + (const devise& M);
	devise operator / (int val);
	devise operator * (double val);
	void operator = (const devise& M);
	
};
