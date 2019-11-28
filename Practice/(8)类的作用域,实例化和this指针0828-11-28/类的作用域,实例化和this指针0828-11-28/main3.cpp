#include <iostream>

using namespace std;

class Date
{
private:
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

	void display()
	{
		cout << m_year << '-' << m_month << '-' << m_day << endl;
	}

};

int main()
{
	Date d1, d2;
	d1.SetDate(2019, 11, 28);
	d2.SetDate(2019, 11, 11);
	
	d1.display();
	d2.display();

	system("pause");
	return 0;
}