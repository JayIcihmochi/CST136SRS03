#pragma once
#include <cassert>
#include "countryenum.h"

template<class money, class mycountry>
class currencyconversion
{
private:
	money money_;
	mycountry currentcountry_;

	double US_{ 1.0 };
	double AU_{ .76 };
	double NZ_{ .71 };
	double FJ_{ .49 };
	double TO_{ .45 };
	double PG_{ .31 };
	double SB_{ .13 };


public:
	currencyconversion(money currentamount, mycountry currentcountry) : money_(currentamount), currentcountry_(currentcountry)
	{	}


	money conversion(country to)
	{
		switch (currentcountry_)
		{
		case country::US:
			break;
		case country::AU:
			money_ *= AU_;
			break;
		case country::NZ:
			money_ *= NZ_;
			break;
		case country::FJ:
			money_ *= FJ_;
			break;
		case country::TO:
			money_ *= TO_;
			break;
		case country::PG:
			money_ *= PG_;
			break;
		case country::SB:
			money_ *= SB_;
			break;
		default:
			assert(false);
			break;
		}

		switch (to)
		{
		case country::US:
			currentcountry_ = country::US;
			break;
		case country::AU:
			money_ /= AU_;
			currentcountry_ = country::AU;
			break;
		case country::NZ:
			money_ /= NZ_;
			currentcountry_ = country::NZ;
			break;
		case country::FJ:
			money_ /= FJ_;
			currentcountry_ = country::FJ;
			break;
		case country::TO:
			money_ /= TO_;
			currentcountry_ = country::TO;
			break;
		case country::PG:
			money_ /= PG_;
			currentcountry_ = country::PG;
			break;
		case country::SB:
			money_ /= SB_;
			currentcountry_ = country::SB;
			break;
		default:
			assert(false);
			break;
		}
		return money_;
	}
};