#include <iostream>

using namespace std;

class Date1
{
	int m_year;
	int m_month;
	int m_day;
public:
	void display() const
	{
		cout << this->m_year << '-' << this->m_month << '-' << this->m_day << endl;
	}
};

int main3()
{


	system("pause");
	return 0;
}