#include <iostream>

using namespace std;

//class Date
//{
//	int m_year;
//	int m_month;
//	int m_day;
//public:
//	Date(int year, int month, int day)
//	{
//		m_year = year;
//		m_month = month;
//		m_day = day;
//	}
//};

class Date
{
	int m_year;
	int m_month;
	int m_day;
public:
	Date(int year, int month, int day) :
		m_year(year),
		m_month(month),
		m_day(day)
	{

	}
};

int main2()
{


	system("pause");
	return 0;
}