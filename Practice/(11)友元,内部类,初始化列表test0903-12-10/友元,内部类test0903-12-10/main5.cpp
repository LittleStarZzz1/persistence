#include <iostream>

using namespace std;

class Date
{
	int m_year;
public:
	explicit Date(int year) :
		m_year(year)
	{
		
	}
};

int main()
{
	//Date a = 2019;


	Date a(2019);

	system("pause");
	return 0;
}