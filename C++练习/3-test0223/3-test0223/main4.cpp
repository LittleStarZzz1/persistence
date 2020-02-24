#include <iostream>

using namespace std;

//自定义类型的链表初始化
// 1. 标准库支持单个对象的列表初始化
class Point
{
//public:
	int m_x;
	int m_y;
public:
	Point(int x = 0, int y = 0) :
		m_x(x),
		m_y(y)
	{

	}
};



int main()
{
	Point p{ 1, 2 };
	//cout << p.m_x << ' ' << p.m_y << endl;

	system("pause");
	return 0;
}