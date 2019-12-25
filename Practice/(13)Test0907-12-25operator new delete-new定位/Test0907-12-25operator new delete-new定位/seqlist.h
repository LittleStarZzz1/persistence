#pragma once

template <class T>
class SeqList
{
	T * m_data;
	size_t m_size;
	size_t m_capacity;

	void checkCapacity();
public:
	//构造函数
	SeqList(size_t size = 0, size_t capacity = 0) :
		m_data(new T[capacity]),
		m_size(size),
		m_capacity(capacity > size ? capacity : size)
	{

	}

	//中括号重载
	T & operator[](int i)
	{
		return m_data[i];
	}

	void push_back(const T & src);
	void pop_back();

	int size();

	~SeqList();

};

template <class T>
void SeqList<T>::checkCapacity()
{
	if (m_size == m_capacity)
	{
		m_capacity *= 2;

		m_data = (T *)realloc(m_data, sizeof(T)* m_capacity);

		//浅拷贝
		/*
		T * newSpace = new T[m_capacity];

		for (int i = 0; i < m_size; ++i)
		{
			newSpace[i] = m_data[i];
		}
		delete[] m_data;
		m_data = newSpace;
		*/
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
	if (m_size == 0)
	{
		return 0;
	}
	m_size--;
}

template <class T>
int SeqList<T>::size()
{
	return m_size;
}

template <class T>
SeqList<T>::~SeqList()
{
	if (m_data)
	{
		delete[] m_data;
	}
	m_size = m_capacity = 0;
}