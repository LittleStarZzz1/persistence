#include <iostream>

using namespace std;

class Person
{
public:
	void PrintPersonInfo();
private:
	char m_name[20];
	char m_gender[3];
	int m_age;
};

//这里需要指定PrintPersonInfo是属于Person这个类域
void Person::PrintPersonInfo()
{
	cout << m_name << ' ' << m_gender << ' ' << m_age << endl;
}

int main1()
{


	system("pause");
	return 0;
}