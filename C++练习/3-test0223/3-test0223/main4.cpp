#include <iostream>

using namespace std;

//�Զ������͵������ʼ��
// 1. ��׼��֧�ֵ���������б��ʼ��
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