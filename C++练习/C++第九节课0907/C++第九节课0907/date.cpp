#include "date.h"

using namespace std;

//ʵ��

static uint getMonthDay(uint y, uint m)
{
	if (m > 12 || m == 0){
		return 0;
	}
	if (m == 4 || m == 6 || m == 9 || m == 11){
		return 30;
	}
	else if (m == 2)
	{
		return 28 + ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0));
	}
	else
	{
		return 31;
	}
}

Date Date::operator + (uint delay) const
{
	Date res = *this;
	uint tmp;
#if 0
	int numy = delay / 365;
	int numd = delay % 365;

	int flag = 0;

	if (res.m_month > 2){
		flag = 1;
	}
	int leapnum = getLeapNum(res.m_year + flag, res.m_year + numy);
	
	if (numd < leapnum)
	{
		numy--;
		leapnum = getLeapNum(res.m_year + flag, res.m_year + numy);
		numd += 365;
		numd -= leapnum;
	}
	else
	{
	numd -= leapnum;
	}
	res.m_year += numy;
	delay = numd;
#endif
	tmp = getMonthDay(res.m_year, res.m_month);

	while (delay >= tmp)
	{
		delay -= tmp;
		res.m_month++;
		if (res.m_month > 12){
			res.m_month = 1;
			res.m_year++;
		}
		tmp = getMonthDay(res.m_year, res.m_month);
	}

	res.m_day += delay;
	if (res.m_day > tmp){
		res.m_month++;
		if (res.m_month > 12)
		{
			res.m_month = 1;
			res.m_year++;
		}
		res.m_day -= tmp;
	}

	return res;
}

int getLeapNum(int sy, int ey)
{
	int tmp = sy % 4;
	if (tmp)
	{
		sy += (4 - tmp);
	}
	return (ey - sy) / 4 + 1;
}


ostream & operator << (ostream & os, Date & d)
{
	os << d.m_year << '-' << d.m_month << '-' << d.m_day;
	return os;
}



