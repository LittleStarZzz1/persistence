#include <iostream>

using namespace std;

class Date2
{
	int m_year;
	int m_month;
	int m_day;
public:
	//�޲ι��캯��
	Date2()
	{

	}

	//���ι��캯��
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
	Date2 d1; //�����޲ι���
	Date2 d2(2019, 1, 1); //���ô��εĹ��캯��

	//ע�⣺���ͨ���޲ι��캯����������ʱ��������治�ø����ţ���Ȼ�ͱ���˺�������
	//��������������������d3�������������û�в���������ֵ�Ǹ�Date���͵Ķ���
	Date2 d3();

	system("pause");
	return 0;
}