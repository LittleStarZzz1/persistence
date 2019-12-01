#include <iostream>

using namespace std;

class Date2
{
	int m_year;
	int m_month;
	int m_day;
public:
	//无参构造函数
	Date2()
	{

	}

	//带参构造函数
	Date2(int year, int month, int day)
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

int main3()
{
	Date2 d1; //调用无参构造
	Date2 d2(2019, 1, 1); //调用带参的构造函数

	//注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，不然就变成了函数声明
	//比如下面这样，声明了d3函数，这个函数没有参数，返回值是个Date类型的对象。
	Date2 d3();

	system("pause");
	return 0;
}