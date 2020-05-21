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


		String(const char* str = "");//���,ǳ������ָ�����ַ����޷��޸�
		String(const String& s);//�������캯��

		//��ֵ���������
		//String& operator =(const String& s);
		//��ֵ��������� �ִ�д��
		String& operator =(String s);//ע�������Ǵ�ֵ

		//[] ����
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
		//��ص����������
		bool operator<(const String& s);
		bool operator<=(const String& s);
		bool operator>(const String& s);
		bool operator>=(const String& s);
		bool operator==(const String& s);
		bool operator!=(const String& s);

		/////////////////////////////////////////////////////////////
		// find
		// ����c��string�е�һ�γ��ֵ�λ��
		size_t find(char c, size_t pos = 0) const;
		// �����Ӵ�s��string�е�һ�γ��ֵ�λ��
		size_t find(const char* s, size_t pos = 0) const;

		/////////////////////////////////////////////////////////////
		// insert
		// ��posλ���ϲ����ַ�c/�ַ���str�������ظ��ַ���λ��
		String& insert(size_t pos, char c);
		String& insert(size_t pos, const char* str);

		/////////////////////////////////////////////////////////////
		// ɾ��posλ���ϵ�Ԫ�أ������ظ�Ԫ�ص���һ��λ��
		String& erase(size_t pos, size_t len);


	private:
		char* _str;
		size_t _size;
		size_t _capacity;//���Դ����Ч�ַ��ĸ���, '\0'������Ч�ַ�

		static size_t npos;
	};

	std::ostream& operator <<(std::ostream& out, const String& s);
	std::istream& operator >>(std::istream& in, String& s);




	void testString_cout();//�����������ز���
	void testString_iterator();//����������
	void testString_();//modify����
	void testString_capacity();// capacity����
	void testString_cmp();// String����Ƚ�

	void testString_find_insert();// find / insert ����
	void testString_erase();// erase ����


}



