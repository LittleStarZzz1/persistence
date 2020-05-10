#include <iostream>
#include "Date.h"

using namespace std;

//全缺省构造函数(默认构造函数)
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
		cout << "此日期不合理~~~~!\n" << endl;
}

//拷贝构造函数
Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

//获取某年某月的天数
int Date::GetMonthDay(int year, int month)
{
	static int day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		return 29;
	return day[month];
}

//日期 += 天数
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
//日期 -= 天数
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
//日期 + 天数
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

	return tmp;//复用实现
}
//日期 - 天数
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
//前置++
Date& Date::operator ++()
{
	return *this += 1;
}
//后置++
Date Date::operator ++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}
//前置--
Date& Date::operator --()
{
	return *this -= 1;
}
//后置--
Date Date::operator --(int)
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
}

//日期 - 日期, 返回天数
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


//赋值运算符重载
Date& Date::operator =(const Date& d)
{
	//针对自己对自己赋值的判断
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}
// >运算符重载
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
// ==运算符重载
bool Date::operator ==(const Date& d)
{
	return _year == d._year && _month == d._month && _day == d._day;
}
// !=运算符重载
bool Date::operator !=(const Date& d)
{
	return !(*this == d);
}
// <运算符重载
bool Date::operator <(const Date& d)
{
	return !(*this >= d);
}
// >=运算符重载
bool Date::operator >=(const Date& d)
{
	return (*this > d) || (*this == d);
}
// <=运算符重载
bool Date::operator <=(const Date& d)
{
	return (*this < d) || (*this == d);
}

//打印
void Date::Print()
{
	cout << _year << '-' << _month << '-' << _day << endl;
}

//友元函数
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

//析构函数
Date::~Date()
{
	cout << "~Date()" << endl;
}

