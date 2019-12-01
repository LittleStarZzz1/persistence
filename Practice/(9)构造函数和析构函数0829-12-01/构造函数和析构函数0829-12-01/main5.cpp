#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class String
{
	char * m_str;
public:
	String(const char * str = "jack")
	{
		m_str = (char *)malloc(strlen(str) + 1);
		strcpy(m_str, str);
	}

	~String()
	{
		cout << "~String" << endl;
		free(m_str);
	}
};

class Person
{
	String s_name;
	int m_age;
};

int main()
{
	Person p;

	system("pause");
	return 0;
}