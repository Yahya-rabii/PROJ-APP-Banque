#include "euro.h"

euro::euro() :devise(), Euro_to_dollar(1.09), Euro_to_Mad(10.64)
{

}

euro::euro(double val) : devise(val), Euro_to_dollar(1.09), Euro_to_Mad(10.64)
{
	
}

double euro::dEuro_to_$(float somme)
{
	double vl;
	return vl = somme * this->Euro_to_dollar;
}

double euro::dEuro_to_mad(float somme)
{
	double vl;
	return vl = somme * this->Euro_to_Mad;
}
