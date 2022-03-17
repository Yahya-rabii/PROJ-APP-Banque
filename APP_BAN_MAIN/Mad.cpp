#include "Mad.h"
#include"devise.h"

Mad::Mad() :devise(),Mad_to_dollar(0.11), Mad_to_Euro(0.094)
{

}


Mad::Mad(double val):devise(val),Mad_to_dollar(0.11),Mad_to_Euro(0.094)
{

}

double Mad::dmad_to_$(double somme)
{
	double vl;
	 vl = somme * this->Mad_to_dollar;
	 return vl;
}

double Mad::dmad_to_€(double somme)
{
	double vl;
	vl = somme * this->Mad_to_Euro;
	return vl;
}
