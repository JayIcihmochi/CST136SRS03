#include "stdafx.h"
#include "currencyconversion.h"
#include "countryenum.h"

int main()
{
	currencyconversion<country, country, double> exchange{country::AU, country::FJ, 32};

	auto money{ exchange.conversion() };

    return 0;
}