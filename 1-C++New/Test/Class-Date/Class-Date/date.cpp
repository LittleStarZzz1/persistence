#include <iostream>
#include "Date.h"

using namespace std;

//ȫȱʡ���캯��(Ĭ�Ϲ��캯��)
Date::Date(int year, int month, int day)
{
	if (year >= 0
		&& month > 0 && month < 13
		&& day > 0 && day <= GetMonthDay(year, month))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
		cout << "�����ڲ�����~~~~!\n" << endl;
}

//�������캯��
Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

//��ȡĳ��ĳ�µ�����
int Date::GetMonthDay(int year, int month)
{
	static int day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		return 29;
	return day[month];
}

//���� += ����
Date& Date::operator +=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			_month = 1;
			++_year;
		}
	}
	return *this;
}
//���� -= ����
Date& Date::operator -=(int day)
{
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			_month = 12;
			--_year;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;

}
//���� + ����
Date Date::operator +(int day)
{
	//Date tmp(*this);
	//tmp._day += day;
	//while (tmp._day > GetMonthDay(tmp._year, tmp._month))
	//{
	//	tmp._day -= GetMonthDay(tmp._year, tmp._month);
	//	tmp._month++;
	//	if (tmp._month == 13)
	//	{
	//		tmp._month = 1;
	//		tmp._year++;
	//	}
	//}
	//return tmp;
	Date tmp(*this);
	tmp += 10;

	return tmp;//����ʵ��
}
//���� - ����
Date Date::operator -(int day)
{
	Date tmp(*this);
	tmp._day -= day;
	while (tmp._day <= 0)
	{
		--tmp._month;
		if (tmp._month == 0)
		{
			tmp._month = 12;
			--tmp._year;
		}
		tmp._day += GetMonthDay(tmp._year, tmp._month);
	}
	return tmp;
}
//ǰ��++
Date& Date::operator ++()
{
	return *this += 1;
}
//����++
Date Date::operator ++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}
//ǰ��--
Date& Date::operator --()
{
	return *this -= 1;
}
//����--
Date Date::operator --(int)
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
}

//���� - ����, ��������
int Date::operator -(const Date& d)
{
	Date max = *this;
	Date min = d;
	if (*this < d)
	{
		max = d;
		min = *this;
	}

	int count = 0;
	while (min != max)
	{
		++min;
		++count;
	}
	return count;

}


//��ֵ���������
Date& Date::operator =(const Date& d)
{
	//����Լ����Լ���ֵ���ж�
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}
// >���������
bool Date::operator >(const Date& d)
{
	if (_year > d._year)
		return true;
	else if (_year == d._year && _month > d._month)
		return true;
	else if (_year == d._year && _month == d._month && _day > d._day)
		return true;
	else
		return false;
}
// ==���������
bool Date::operator ==(const Date& d)
{
	return _year == d._year && _month == d._month && _day == d._day;
}
// !=���������
bool Date::operator !=(const Date& d)
{
	return !(*this == d);
}
// <���������
bool Date::operator <(const Date& d)
{
	return !(*this >= d);
}
// >=���������
bool Date::operator >=(const Date& d)
{
	return (*this > d) || (*this == d);
}
// <=���������
bool Date::operator <=(const Date& d)
{
	return (*this < d) || (*this == d);
}

//��ӡ
void Date::Print()
{
	cout << _year << '-' << _month << '-' << _day << endl;
}

//��Ԫ����
std::ostream& operator<<(std::ostream& out, const Date& d)
{
	out << d._year << '-' << d._month << '-' << d._day;
	return out;
}
std::istream& operator>>(std::istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}

//��������
Date::~Date()
{
	cout << "~Date()" << endl;
}

