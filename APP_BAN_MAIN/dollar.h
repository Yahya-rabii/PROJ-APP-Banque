#pragma once
#include "devise.h"

class dollar : public devise
{

private:

	double dollar_to_Euro;
	double dollar_to_Mad;

public:
	dollar();
	dollar(double val);

	double ddollar_to_Euro(float somme);
	double ddollar_to_mad(float somme);
	

};

