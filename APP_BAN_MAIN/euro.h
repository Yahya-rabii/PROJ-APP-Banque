#pragma once
#include "devise.h"


class euro : public devise
{


private:
	double Euro_to_dollar;
	double Euro_to_Mad;

public:
	euro();
	euro(double val);

	double dEuro_to_$(float somme);
	double dEuro_to_mad(float somme);
};


