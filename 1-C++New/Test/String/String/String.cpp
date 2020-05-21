#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include "String.h"
using namespace yx;

size_t String::npos = -1;

String::itreator String::begin()//注意iterator前加域作用限定符
{
	return _str;
}
String::itreator String::end()
{
	return _str + _size;
}

String::String(const char* str)//默认构造函数
{
	_size = strlen(str);
	_capacity = _size;
	_str = new char[_capacity + 1];
	strcpy(_str, str);
}

String::String(const String& s) ://拷贝构造函数
	_str(nullptr),
	_size(0),
	_capacity(0)
{
	//_size = strlen(s._str);
	//_capacity = _size;
	//_str = new char[_capacity + 1];
	//strcpy(_str, s._str);

	//现代写法
	String tmp(s._str);
	//std::swap(_str, tmp._str);
	//std::swap(_size, tmp._size);
	//std::swap(_capacity, tmp._capacity);

	swap(tmp);

}

//赋值运算符重载
//String& String::operator =(const String& s)
//{
//	if (this != &s)//防止自己给自己赋值
//	{
//		char* tmp = new char[strlen(s._str) + 1];//开辟新空间
//		strcpy(tmp, s._str);//拷贝数据
//		delete[] _str;//释放旧空间
//		_str = tmp;
//	}
//	return *this;
//}
//赋值运算符重载 现代写法
String& String::operator =(String s)//注意这里是传值
{
	//std::swap(_str, s._str);
	//std::swap(_size, s._size);
	//std::swap(_capacity, s._capacity);
	swap(s);
	return *this;
}

///////////////////////////////////////////////////////////
//[] 重载
char& String::operator [](size_t i)
{
	assert(i < _size);
	return _str[i];
}
const char& String::operator [](size_t i) const
{
	assert(i < _size);
	return _str[i];
}

///////////////////////////////////////////////////////////
size_t String::size() const
{
	return _size;
}
size_t String::lenth() const
{
	return _size;
}
size_t String::capacity() const
{
	return _capacity;
}
bool String::empty()const
{
	//if (_size == 0)
	//	return true;
	//return false;
	return _size == 0;
}
void String::resize(size_t newSize, char c)
{
	if (newSize < _size)
	{
		_size = newSize;
		_str[_size] = '\0';
	}
	else
	{
		if (newSize > _capacity)
		{
			reserve(newSize);
		}

		for (size_t i = _size; i < newSize; ++i)
		{
			_str[i] = c;
		}
		_size = newSize;
		_str[_size] = '\0';
	}
}
void String::reserve(size_t newCapacity)
{
	if (newCapacity > _capacity)
	{
		char* tmp = new char[newCapacity + 1];
		strcpy(tmp, _str);
		delete[] _str;
		_str = tmp;
		_capacity = newCapacity;
	}
}

String::~String()
{
	delete[] _str;
	_str = nullptr;
	_size = _capacity = 0;
}

//////////////////////////////////////////////////////////////
// modify
void String::PushBack(char c)
{
	//if (_size + 1 > _capacity)
	//{
	//	int newcapacity = _capacity == 0 ? 2 : _capacity * 2;
	//	char* tmp = new char[newcapacity + 1];
	//	strcpy(tmp, _str);
	//	delete[] _str;
	//	_str = tmp;
	//	_capacity = newcapacity;
	//}

	/////////////////////////////////////////////////////////////
	//if (_size == _capacity)
	//{
	//	size_t newcapacity = _capacity == 0 ? 2 : _capacity * 2;
	//	reserve(newcapacity);
	//}
	//_str[_size] = c;
	//_size++;
	//_str[_size] = '\0';

	insert(_size, c);

}
void String::Append(const char* str)
{
	//int len = strlen(str);
	//if (len + _size > _capacity)
	//{
	//	char* tmp = new char[len + _size + 1];
	//	strcpy(tmp, _str);
	//	delete[] _str;
	//	_str = tmp;
	//	_capacity = len + _size;
	//}

	///////////////////////////////////////////////
	//int len = strlen(str);
	//if (len + _size > _capacity)
	//	reserve(len + _size);

	//strcpy(_str + _size, str);
	//_size += len;

	insert(_size, str);
}
String& String::operator+=(char c)
{
	this->PushBack(c);
	return *this;
}
String& String::operator+=(const char* str)
{
	this->Append(str);
	return *this;

}
void String::clear()
{
	_size = 0;
}
void String::swap(String& s)
{
	std::swap(_str, s._str);
	std::swap(_size, s._size);
	std::swap(_capacity, s._capacity);
}
const char* String::c_str() const
{
	return _str;
}

///////////////////////////////////////////////////////////
//输出运算符重载, 可以不使用友元, 因为并没有访问私有成员
std::ostream& yx::operator <<(std::ostream& out, const String& s)
{
	for (size_t i = 0; i < s.size(); ++i)
	{
		out << s[i];
	}
	return out;
}
//std::istream& operator >>(std::istream& in, String& s)
//{
//
//}

/////////////////////////////////////////////////////////////
//相关的运算符重载
bool String::operator<(const String& s)
{
	if (strcmp(_str, s._str) < 0)
		return true;
	return false;
}
bool String::operator<=(const String& s)
{
	return (*this < s) || (*this == s);
}
bool String::operator>(const String& s)
{
	//if (strcmp(_str, s._str) > 0)
	//	return true;
	//return false;
	return !(*this <= s);
}
bool String::operator>=(const String& s)
{
	return (*this > s) || (*this == s);
}
bool String::operator==(const String& s)
{
	if (strcmp(_str, s._str) == 0)
		return true;
	return false;
}
bool String::operator!=(const String& s)
{
	return !(*this == s);
}

/////////////////////////////////////////////////////////////
// find
// 返回c在string中第一次出现的位置
size_t String::find(char c, size_t pos) const
{
	assert(pos < _size);

	for (size_t i = pos; i < _size; ++i)
	{
		if (_str[i] == c)
			return i;
	}
	return npos;
}
// 返回子串s在string中第一次出现的位置
size_t String::find(const char* s, size_t pos) const
{
	assert(pos + strlen(s) < _size);

	char* ptmp = strstr(_str + pos, s);
	if (ptmp)
		return ptmp - _str;
	return npos;
}

/////////////////////////////////////////////////////////////
// insert
// 在pos位置上插入字符c/字符串str
String& String::insert(size_t pos, char c)
{
	assert(pos <= _size);

	if (_size == _capacity)
	{
		size_t newcapacity = _capacity == 0 ? 2 : _capacity * 2;
		reserve(newcapacity);
	}

	for (int i = _size - 1; i >= (int)pos; --i)
	{
		_str[i + 1] = _str[i];
	}
	_str[pos] = c;
	_size++;//记得修改_size
	_str[_size] = '\0';//记得补'\0'

	return *this;


}
String& String::insert(size_t pos, const char* str)
{
	assert(pos <= _size);

	if (_size + strlen(str) > _capacity)
	{
		reserve(_size + strlen(str));
	}

	for (size_t i = _size - 1; i >= pos; --i)
	{
		_str[i + strlen(str)] = _str[i];
	}

	_size += strlen(str);
	_str[_size] = '\0';
	strncpy(_str + pos, str, strlen(str));
	
	return *this;
}

/////////////////////////////////////////////////////////////
// 删除pos位置上的元素
String& String::erase(size_t pos, size_t len)
{
	assert(pos < _size);//不能等于_size,会删掉'\0'

	if (len >= _size - pos)
	{
		_str[pos] = '\0';
		_size = pos;
	}
	
	else
	{
		for (size_t i = pos; i <= _size; ++i)//循环终止条件为<=_size, 目的是为了将'\0'也向前覆盖
		{
			_str[i] = _str[i + len];
		}
		_size -= len;
		//_str[_size] = '\0';
	}

	return *this;
}

void yx::testString_cout()
{
	String s("hello world");

	std::cout << s << std::endl;
}

void yx::testString_iterator()
{
	String s("hello world");
	//std::cout << s << std::endl;


	for (size_t i = 0; i < s.size(); ++i)
	{
		s[i] += 1;
		std::cout << s[i];
	
	}
	std::cout << std::endl;

	String::itreator it = s.begin();
	while (it != s.end())
	{
		*it += 1;
		std::cout << *it;
		++it;
	}
	std::cout << std::endl;

	for (auto& e : s)
	{
		std::cout << e;
	}
	std::cout << std::endl;
}

void yx::testString_()
{
	String s("hello world");
	//s += ' ';
	//s += "nihao";

	//s.PushBack('8');
	//s.Append("ssssss");
	String s1("nihao");

	s.swap(s1);

	//s.clear();
	s.PushBack('8');
	s1.PushBack('7');

	s.Append("aaaaaaaaa");
	s1.Append("bbbbbbbbbb");

	std::cout << s << std::endl;
	std::cout << s1 << std::endl;



	//std::cout << s << std::endl;
}

// capacity测试
void yx::testString_capacity()
{
	String s1("hello world");

	std::cout << s1.size() << std::endl;
	std::cout << s1.capacity() << std::endl;

	//s1.resize(5);
	//std::cout << s1.size() << std::endl;
	//std::cout << s1.capacity() << std::endl;
	//std::cout << s1 << std::endl;

	//s1.resize(7);
	//std::cout << s1.size() << std::endl;
	//std::cout << s1.capacity() << std::endl;
	//std::cout << s1 << std::endl;

	s1.resize(15);
	std::cout << s1.size() << std::endl;
	std::cout << s1.capacity() << std::endl;
	std::cout << s1 << std::endl;
}

void yx::testString_cmp()// String对象比较
{
	String s1("hello");
	String s2("nihao");
	String s3("nihao");

	std::cout << (s1 < s2) << std::endl;//1
	std::cout << (s1 == s2) << std::endl;//0
	std::cout << (s1 > s2) << std::endl;//0

	std::cout << (s2 < s3) << std::endl;//0
	std::cout << (s2 == s3) << std::endl;//1
	std::cout << (s2 > s3) << std::endl;//0

	std::cout << (s1 <= s2) << std::endl;//1
	std::cout << (s3 <= s2) << std::endl;//1

	std::cout << (s2 >= s1) << std::endl;//1
	std::cout << (s3 >= s2) << std::endl;//1

	std::cout << (s1 != s2) << std::endl;//1
	std::cout << (s2 != s3) << std::endl;//0
	std::cout << (s1 != s3) << std::endl;//1
}

void yx::testString_find_insert()
{
	String s1("hello");

	std::cout << s1 << std::endl;
	s1.insert(5, ' ');
	std::cout << s1 << std::endl;
	s1.insert(6, "china");
	std::cout << s1 << std::endl;
}

void yx::testString_erase()// erase 测试
{
	String s("nihaoxxxxx");

	std::cout << s << std::endl;
	//s.erase(5, 5);
	//s.erase(0, 100);
	s.erase(0, 5);
	std::cout << s << std::endl;

	s.insert(0, 'q');
	std::cout << s << std::endl;
}


