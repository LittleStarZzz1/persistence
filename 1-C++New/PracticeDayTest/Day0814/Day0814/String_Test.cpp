#include <iostream>
#include <algorithm>

using namespace std;

class String
{
public:
	//Ĭ�Ϲ��캯��
	String(char* str = "") :
		_str(new char[strlen(str)] + 1)
	{
		strcpy(_str, str);
	}
	//��������
	String(const String& s)
	{
		_str = new char[strlen(s._str) + 1];
		strcpy(_str, s._str);
	}

	//�ƶ�����
	String(String&& s)
	{
		swap(_str, s._str);
	}

	//�ƶ���ֵ
	String& operator =(String&& s)
	{
		if (this != &s)
		{
			swap(_str, s._str);
		}
		return *this;
	}

	//��ֵ���������
	String& operator =(const String& s)
	{
		//��ֹ�Լ����Լ���ֵ
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

	//��������
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