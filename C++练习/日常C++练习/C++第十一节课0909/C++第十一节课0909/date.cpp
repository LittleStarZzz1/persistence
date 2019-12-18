#include "date.h"

static uint getMonthDay(int y, uint m)	//�õ�ÿ�µ�����
{
	if (m > 12 || m <= 0)
	{
		return 0;
	}

	if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		return 30;
	}

	else if (m == 2)
	{
		return 28 + ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
	}

	else
	{
		return 31;
	}

}

int getLeapNum(int sy, int ey)	//������ʼ��ݺͽ�����β,������������ĸ���
{
	int tmp = sy % 4;	//�����ж���ʼ���Ƿ�Ϊ����
	if (tmp)
	{
		sy += (4 - tmp);
	}
	return (ey - sy) / 4 + 1;
}

uint Date::getDayOfYear()	//�õ���Ӧ���µ�����
{
	int i;
	uint days = 0;

	for (i = 1; i < m_month; ++i)
	{
		days += getMonthDay(m_year, i);
	}

	return days + m_day;
}


Date Date::operator + (uint delay) const
{
	Date res = *this;
	uint tmp;

	tmp = getMonthDay(res.m_year, res.m_month);

	while (delay >= tmp)
	{
		delay -= tmp;
		res.m_month++;
		if (res.m_month > 12)
		{
			res.m_month = 1;
			res.m_year++;
		}
		tmp = getMonthDay(res.m_year, res.m_month);
	}

	res.m_day += delay;
	if (res.m_day > tmp)
	{
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

ostream & operator << (ostream & os, Date & d)	//��Ҫ����ֵ��ʱ��Ҫ������
{
	os << d.m_year << '-' << d.m_month << '-' << d.m_day;
	return os;
}

bool Date::operator < (const Date & d) const	//���������е�С�ڹ�ϵ,����ֵΪtrue or false
{
	if (m_year < d.m_year)	//�ȱ����
	{
		return true;
	}

	if (m_year == d.m_year && m_month < d.m_month)	//�����ȱ��·�
	{
		return true;
	}

	if (m_year == d.m_year && m_month == d.m_month && m_day < d.m_day)	//������ȱ���
	{
		return true;
	}

	return false;
}

bool Date::operator >(const Date & d) const	//���������еĴ��ڹ�ϵ
{
	if (m_year > d.m_year)
	{
		return true;
	}

	if (m_year == d.m_year && m_month > d.m_month)
	{
		return true;
	}

	else if (m_year == d.m_year && m_month == d.m_month && m_day > d.m_day)
	{
		return true;
	}

	return false;
}

bool Date::operator <= (const Date & d) const
{
	return !(*this > d);	//�����еĴ��ڹ�ϵ������Ѿ�����,������Ϳ���ֱ����
}

bool Date::operator >= (const Date & d) const
{
	return !(*this < d);
}

bool Date::operator == (const Date & d) const
{
	if (m_year == d.m_year && m_month == d.m_month && m_day == d.m_day)
	{
		return true;
	}

	return false;
}

bool Date::operator != (const Date & d) const
{
	return !(*this == d);	//ͬ����������������ȹ�ϵ�Ѿ�����,���������ֱ����
}


Date Date::operator - (uint delay) const
{
	Date res = *this;
	uint tmp;

	if (res.m_month == 0)
	{
		res.m_year--;
		res.m_month = 12;
	}
	else
	{
		res.m_month--;
	}

	tmp = getMonthDay(res.m_year, res.m_month);

	while (delay >= tmp)
	{
		delay -= tmp;
		res.m_month--;
		if (res.m_month == 0)
		{
			res.m_month = 12;
			res.m_year--;
		}
		tmp = getMonthDay(res.m_year, res.m_month);
	}

	int tmpday = res.m_day;
	tmpday = res.m_day - delay;

	if (tmpday <= 0)
	{
		tmpday += tmp;
	}

	else
	{
		res.m_month++;
		if (res.m_month > 12)
		{
			res.m_month = 1;
			res.m_year++;
		}
	}

	res.m_day = tmpday;
	return res;

}

int Date::operator - (Date & d) const
{
	Date bigger = *this;
	Date smaller = d;
	int flag = 1;
	if (*this < d)
	{
		bigger = d;
		smaller = *this;
		flag = -1;
	}

	int years = bigger.m_year - smaller.m_year;
	int days = years * 365 + getLeapNum(smaller.m_year, bigger.m_year - 1);

	days = days - smaller.getDayOfYear() + bigger.getDayOfYear();

	return days * flag;

}

Date Date::operator ++()
{
	m_day++;
	if (m_day > getMonthDay(m_year, m_month))
	{
		m_day = 1;
		m_month++;
		if (m_month > 12)
		{
			m_month = 1;
			m_year++;
		}
	}
	return *this;
}

Date Date::operator ++ (int)
{
	Date tmp = *this;

	m_day++;
	if (m_day > getMonthDay(m_year, m_month))
	{
		m_day = 1;
		m_month++;
		if (m_month > 12)
		{
			m_month = 1;
			m_year++;
		}
	}
	return tmp;
}

Date Date::operator -- ()
{
	m_day--;
	if (m_day < 1)
	{
		m_month--;
		if (m_month < 1)
		{
			m_month = 12;
			m_year--;
		}
		m_day = getMonthDay(m_year, m_month);
	}
	return *this;
}

Date Date::operator -- (int)
{
	Date tmp = *this;

	m_day--;
	if (m_day < 1)
	{
		m_month--;
		if (m_month < 1)
		{
			m_month = 12;
			m_year--;
		}
		m_day = getMonthDay(m_year, m_month);
	}
	return tmp;
}











