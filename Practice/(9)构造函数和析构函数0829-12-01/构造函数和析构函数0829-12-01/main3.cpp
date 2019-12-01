#include <iostream>

using namespace std;

class Date
{
	int m_year;
	int m_month;
	int m_day;
public:

	Date()
	{
		m_year = 2019;
		m_month = 12;
		m_year = 1;
	}

	//带参构造函数
	Date(int year = 2008, int month = 8, int day = 8)
	{
		m_year = year;
		m_month = month;
		m_day = day;
	}

};

int main()
{
	//Date d1;

	system("pause");
	return 0;
}