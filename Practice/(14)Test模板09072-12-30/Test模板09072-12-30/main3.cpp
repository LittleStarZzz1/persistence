#include <iostream>

using namespace std;

//����ģ�����ʽʵ��������ʾʵ����
//��ʽʵ����
template <class T>
T Add(const T & a, const T & b)
{
	return a + b;
}

int main()
{
	int a1 = 10;
	int a2 = 20;

	double b1 = 3.14;
	double b2 = 0.618;

	cout << Add(a1, a2) << endl;
	cout << Add(b1, b2) << endl;

	system("pause");
	return 0;
}