#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

struct Student
{
	char m_name[20];
	char m_gender[3];
	int m_age;

	void setInfo(const char * name, const char * gender, int age)
	{
		strcpy(m_name, name);
		strcpy(m_gender, gender);
		m_age = age;
	}

	void printStudentInfo()
	{
		cout << m_name << ' ' << m_gender << ' ' << m_age;
	}
};

int main2()
{
	Student s;

	s.setInfo("Jack", "ÄÐ", 18);

	s.printStudentInfo();

	system("pause");
	return 0;
}