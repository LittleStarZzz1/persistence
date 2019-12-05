#include <iostream>

using namespace std;

class Date
{
	int m_year;
	int m_month;
	int m_day;
public:
	Date(int year = 2019, int month = 12, int day = 5)
	{
		m_year = year;
		m_month = month;
		m_day = day;
	}

	Date & operator = (const Date & d)
	{
		if (this != &d){
			m_year = d.m_year;
			m_month = d.m_month;
			m_day = d.m_day;
		}
	}

	Date(const Date & d) //¿½±´¹¹Ôì
	{
		m_year = d.m_year;
		m_month = d.m_month;
		m_day = d.m_day;
	}
};

int main2()
{
	Date d1;
	Date d2(d1); 

	system("pause");
	return 0;
}