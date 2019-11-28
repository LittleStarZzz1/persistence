#include <iostream>

using namespace std;

class Person
{
public:
	char * m_name;//姓名
	char * m_sex; //性别
	int m_age;    //年龄

	//显示基本信息
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
	man.m_sex = "男";
	man.m_age = 10;

	man.showInfo();

	system("pause");
	return 0;
}