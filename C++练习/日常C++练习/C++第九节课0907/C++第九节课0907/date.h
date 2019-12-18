#pragma once
#include <iostream>

using namespace std;

typedef unsigned int uint;

//类声明

class Date
{
	int m_year;
	uint m_month;
	uint m_day;


public:

	Date(int y, uint m, uint d) :
		m_year(y),
		m_month(m),
		m_day(d)
	{
		
	}

	Date operator + (const uint delay) const;	//第一个参数就是本身的this指针

	friend ostream & operator << (ostream & os, Date & d);

};


