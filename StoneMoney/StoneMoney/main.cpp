#include "stdafx.h"
#include "currencyconversion.h"
#include "countryenum.h"

int main()
{
	currencyconversion<countries, countries, int> exchange;

	exchange.conversion();

    return 0;
}
