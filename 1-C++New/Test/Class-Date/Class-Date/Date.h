#pragma once
#include <iostream>

class Date
{
public:

	//全缺省构造函数(默认构造函数)
	Date(int year = 0, int month = 1, int day = 1);
	//拷贝构造函数
	Date(const Date& d);

	//获取某年某月的天数
	int GetMonthDay(int year, int month);

	//赋值运算符重载
	Date& operator =(const Date& d);
	// >运算符重载
	bool operator >(const Date& d);
	// ==运算符重载
	bool operator ==(const Date& d);
	// !=运算符重载
	bool operator !=(const Date& d);
	// <运算符重载
	bool operator <(const Date& d);
	// >=运算符重载
	bool operator >=(const Date& d);
	// <=运算符重载
	bool operator <=(const Date& d);

	//日期 += 天数
	Date& operator +=(int day);
	//日期 -= 天数
	Date& operator -=(int day);
	//日期 + 天数
	Date operator +(int day);
	//日期 - 天数
	Date operator -(int day);

	//前置++
	Date& operator ++();
	//后置++
	Date operator ++(int);

	//前置--
	Date& operator --();
	//后置--
	Date operator --(int);

	//日期 - 日期, 返回天数
	int operator -(const Date& d);

	//打印
	void Print();

	//友元函数
	friend std::ostream& operator<<(std::ostream& out, const Date& d);
	friend std::istream& operator>>(std::istream& in, Date& d);

	//析构函数
	~Date();

private:
	int _year;
	int _month;
	int _day;
};

std::ostream& operator<<(std::ostream& out, const Date& d);
std::istream& operator<<(std::istream& out, const Date& d);