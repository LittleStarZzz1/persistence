#include <iostream>
#include <algorithm>

using namespace std;

class String
{
public:
	//默认构造函数
	String(char* str = "") :
		_str(new char[strlen(str)] + 1)
	{
		strcpy(_str, str);
	}
	//拷贝构造
	String(const String& s)
	{
		_str = new char[strlen(s._str) + 1];
		strcpy(_str, s._str);
	}

	//移动构造
	String(String&& s)
	{
		swap(_str, s._str);
	}

	//移动赋值
	String& operator =(String&& s)
	{
		if (this != &s)
		{
			swap(_str, s._str);
		}
		return *this;
	}

	//赋值运算符重载
	String& operator =(const String& s)
	{
		//防止自己给自己赋值
		if (this != &s)
		{
			char* tmp = new char[strlen(s._str) + 1];
			strcpy(tmp, s._str);
			delete[] _str;
			_str = tmp;
		}
		return *this;
	}

	char& operator [](int pos)
	{
		return _str[pos];
	}

	int size()
	{
		return strlen(_str);
	}

	const char* c_str()
	{
		return _str;
	}

	//析构函数
	~String()
	{
		delete[] _str;
		_str = nullptr;
	}
private:
	char* _str;
};

int main()
{

	return 0;
}