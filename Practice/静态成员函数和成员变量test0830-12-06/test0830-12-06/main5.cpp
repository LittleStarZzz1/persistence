#include <iostream>

using namespace std;

//ȡ��ַ��constȡ��ַ����������
class Date
{
	int m_year;
	int m_month;
	int m_day;
public:
	Date * operator &()
	{
		return this;
	}
	const Date * operator &() const
	{	
		return this;
	}
};

int main()
{


	system("pause");
	return 0;
}