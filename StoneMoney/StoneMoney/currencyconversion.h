#pragma once
#include <cassert>
#include "countryenum.h"

template<class from, class to, class money>
class currencyconversion
{
private:
	from from_;
	to to_;
	money money_;

	double US_{ 1.0 };
	double AU_{ .76 };
	double NZ_{ .71 };
	double FJ_{ .49 };
	double TO_{ .45 };
	double PG_{ .31 };
	double SB_{ .13 };


public:
	currencyconversion(from changefrom, to changeto, money currentamount) : from_(changefrom), to_(changeto), money_(currentamount)
	{	}


	money conversion()
	{
		switch (from_)
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

		switch (to_)
		{
		case country::US:
			break;
		case country::AU:
			money_ /= AU_;
			break;
		case country::NZ:
			money_ /= NZ_;
			break;
		case country::FJ:
			money_ /= FJ_;
			break;
		case country::TO:
			money_ /= TO_;
			break;
		case country::PG:
			money_ /= PG_;
			break;
		case country::SB:
			money_ /= SB_;
			break;
		default:
			assert(false);
			break;
		}

		return money_;
	}
};