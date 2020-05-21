#pragma once
#include <iostream>
#include <cstring>
#include <assert.h>

namespace yx
{
	class String
	{
	public:

		typedef char* itreator;

		itreator begin();
		itreator end();


		String(const char* str = "");//深拷贝,浅拷贝会指向常量字符串无法修改
		String(const String& s);//拷贝构造函数

		//赋值运算符重载
		//String& operator =(const String& s);
		//赋值运算符重载 现代写法
		String& operator =(String s);//注意这里是传值

		//[] 重载
		char& operator [](size_t i);
		const char& operator [](size_t i) const;

		//////////////////////////////////////
		// capacity
		size_t size() const;
		size_t String::lenth() const;
		size_t capacity() const;
		bool empty()const;
		void resize(size_t newSize, char c = '\0');
		void reserve(size_t newCapacity);

		~String();

		////////////////////////////////////////
		// modify
		void PushBack(char c);
		String& operator+=(char c);
		void Append(const char* str);
		String& operator+=(const char* str);
		void clear();
		void swap(String& s);
		const char* c_str()const;

		/////////////////////////////////////////////////////////////
		//相关的运算符重载
		bool operator<(const String& s);
		bool operator<=(const String& s);
		bool operator>(const String& s);
		bool operator>=(const String& s);
		bool operator==(const String& s);
		bool operator!=(const String& s);

		/////////////////////////////////////////////////////////////
		// find
		// 返回c在string中第一次出现的位置
		size_t find(char c, size_t pos = 0) const;
		// 返回子串s在string中第一次出现的位置
		size_t find(const char* s, size_t pos = 0) const;

		/////////////////////////////////////////////////////////////
		// insert
		// 在pos位置上插入字符c/字符串str，并返回该字符的位置
		String& insert(size_t pos, char c);
		String& insert(size_t pos, const char* str);

		/////////////////////////////////////////////////////////////
		// 删除pos位置上的元素，并返回该元素的下一个位置
		String& erase(size_t pos, size_t len);


	private:
		char* _str;
		size_t _size;
		size_t _capacity;//可以存放有效字符的个数, '\0'不是有效字符

		static size_t npos;
	};

	std::ostream& operator <<(std::ostream& out, const String& s);
	std::istream& operator >>(std::istream& in, String& s);




	void testString_cout();//输出运算符重载测试
	void testString_iterator();//迭代器测试
	void testString_();//modify测试
	void testString_capacity();// capacity测试
	void testString_cmp();// String对象比较

	void testString_find_insert();// find / insert 测试
	void testString_erase();// erase 测试


}



