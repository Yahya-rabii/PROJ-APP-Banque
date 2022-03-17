#include "dollar.h"


dollar::dollar():devise(), dollar_to_Euro(0.91), dollar_to_Mad(9.74)
{

}

dollar::dollar(double val) : devise(val), dollar_to_Euro(0.91), dollar_to_Mad(9.74)
{
}

double dollar::ddollar_to_Euro(float somme)
{
	double vl;
	return vl = somme * this->dollar_to_Euro;
}

double dollar::ddollar_to_mad(float somme)
{
	double vl;
	return vl = somme * this->dollar_to_Mad;
}
