#pragma once
#include "devise.h"

class Mad :public devise
{


private:
	 double Mad_to_dollar ;
	 double Mad_to_Euro ;

public:
	Mad();
	Mad(double val);
	double dmad_to_$(double somme);
	double dmad_to_€(double somme);
};

