#include <iostream>

using namespace std;

class Person
{
public:
	char * m_name;//����
	char * m_sex; //�Ա�
	int m_age;    //����

	//��ʾ������Ϣ
	void showInfo();
};

void Person::showInfo()
{
	cout << m_name << ' ' << m_sex << ' ' << m_age << endl;
}

int main()
{
	Person man;
	man.m_name = "Jack";
	man.m_sex = "��";
	man.m_age = 10;

	man.showInfo();

	system("pause");
	return 0;
}