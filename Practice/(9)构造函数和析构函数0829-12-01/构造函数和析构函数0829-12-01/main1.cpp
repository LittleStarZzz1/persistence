#include <iostream>

using namespace std;

class Date1
{
	int m_year;
	int m_month;
	int m_day;
public:
	void SetDate(int year, int month, int day)
	{
		m_year = year;
		m_month = month;
		m_day = day;
	}

	void Display()
	{
		cout << m_year << '-' << m_month << '-' << m_day << endl;
	}
};

int main2()
{
	Date1 d1, d2;
	d1.SetDate(2019, 12, 1);
	d1.Display();

	d2.SetDate(2019, 10, 1);
	d2.Display();

	system("pause");
	return 0;
}