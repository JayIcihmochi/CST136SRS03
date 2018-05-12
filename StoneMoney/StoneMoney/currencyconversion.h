#pragma once

template<class from, class to, class money>
class currencyconversion
{
private:
	money money_;
	from from_;
	to to_;

	double US_{ 1.0 };
	double AU_{ .76 };
	double NZ_{ .71 };
	double FJ_{ .49 };
	double TO_{ .45 };
	double PG_{ .31 };
	double SB_{ .13 };


public:



	int conversion() const
	{
		switch (from_)
		{
		case 0:
			break;
		default:
			break;
		}

		return money_;
	}
};