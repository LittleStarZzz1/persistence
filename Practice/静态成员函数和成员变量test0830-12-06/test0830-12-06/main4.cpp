#include <iostream>

using namespace std;

class Date
{
	int m_year;
	int m_month;
	int m_day;
public:

	void display()
	{
		cout << "display ()" << endl;        
		cout << "year:" << m_year << endl;        
		cout << "month:" << m_month << endl;
		cout << "day:" << m_day << endl << endl;
	}

	void display() const
	{
		cout << "display () const" << endl;
		cout << "year:" << m_year << endl;
		cout << "month:" << m_month << endl;
		cout << "day:" << m_day << endl << endl;
	}
};

int main()
{
	Date d1;
	d1.display();

	const Date d2;
	d2.display();

	system("pause");
	return 0;
}