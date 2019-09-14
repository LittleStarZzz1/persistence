#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;


template <class T>
class SeqList{
	T * m_data;
	size_t m_size;
	size_t m_capacity;

	void checkCapacity(const T & src);

public:
	SeqList(size_t capacity = 10) :
		m_data(new T[capacity]),
		m_size(0),
		m_capacity(capacity)
	{

	}

	void push_back(cost T & src);
	
	void pop_back();
	
	~SeqList();

};


//扩容
template <class T>
void SeqList<T>::checkCapacity(const T & src)
{
	//if (m_size == m_capacity)
	//{
	//	m_capacity *= 2;
	//	T * newSpace = new T[m_capacity];
	//	for (int i = 0; i < m_size; ++i)
	//	{
	//		newSpace[i] = m_data[i];
	//	}
	//	delete[] m_data;	//调用析构的时候很可能干掉拷贝的空间
	//	m_data = newSpace;
	//}

	if (m_size == m_capacity)
	{
		m_capacity *= 2;

		m_data = (T *)realloc(m_data, sizeof(T)* m_capacity);
	}
}


template <class T>
void SeqList<T>::push_back(const T & src)
{
	checkCapacity();
	m_data[m_size] = src;
	m_size++;
}

template <class T>
void SeqList<T>::pop_back()
{
	if (m_size == 0){
		return;
	}
	m_size--;

}

template <class T>
SeqList<T>::~SeqList()
{
	if (m_data)
	{
		delete[] m_data;
	}

}








