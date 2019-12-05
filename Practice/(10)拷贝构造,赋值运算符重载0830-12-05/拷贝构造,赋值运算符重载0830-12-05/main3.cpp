#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class String
{
	char * m_str;
public:
	String(const char * str = "nihao")
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

int main3()
{
	String s1("Hello");
	String s2(s1);

	system("pause");
	return 0;
}