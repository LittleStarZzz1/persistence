#pragma once

#include <assert.h>

namespace yx
{
	template<class T>
	class Vector
	{
	public:
		typedef T* iterator;//迭代器
		typedef const T* const_iterator;//const迭代器

		iterator begin()
		{
			return _start;
		}
		iterator end()
		{
			return _finish;
		}

		const_iterator begin() const
		{
			return _start;
		}
		const_iterator end() const
		{
			return _finish;
		}

		////////////////////////////////////////////////////////////
		//构造函数
		Vector() :
			_start(nullptr),
			_finish(nullptr),
			_endofstorage(nullptr)
		{

		}
		//拷贝构造函数
		Vector(const Vector& v)
		{
			size_t _sz = v.capacity();
			 _start = new T[_sz];
			_finish = _start;
			_endofstorage = _start + _sz;

			for (size_t i = 0; i < v.size(); ++i)
			{
				*finish = v[i];//数据拷贝
				++_finish;
			}
		}
		//赋值运算符重载
		Vector& operator =(const Vector<T>& v)
		{
			if (this != &v)//忽略自己给自己赋值的操作
			{
				delete[] _start;//释放旧空间
				_start = new T[v.capacity()];
				memcpy(_start, v._start, sizeof(T)* v.size());
			}
			return *this;
		}
		//析构函数
		~Vector()
		{
			delete[] _start;
			_start = _finish = _endofstorage = nullptr;
		}
		

		/////////////////////////////////////////////////////////////
		// capacity
		size_t size() const
		{
			return _finish - _start;
		}
		size_t capacity() const
		{
			return _endofstorage - _start;
		}
		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t _sz = size();
				T* tmp = new T[n];

				if (_start)//原来数据不为空, 就将数据拷贝到新空间当中, 并释放旧空间
				{
					for (size_t i = 0; i < _sz; ++i)
					{
						tmp[i] = _start[i];
					}
					delete[] _start;
				}
				
				_start = tmp;
				_finish = _start + _sz;
				_endofstorage = _start + n;
			}	
		}
		void resize(size_t n, const T& val = T())
		{
			if (n < size())
			{
				_finish = _start + n;//新的size小于原来的size,修改_finish指向的位置即可
			}
			else
			{
				if (n > capacity())
				{
					reserve(n);
				}
				
				while (_finish < _start + n)//大于原来的size,但是没有超过capacity,用val填充,直到size为n
				{
					*_finish = val;
					_finish++;
				}
			}

		}

		///////////////access///////////////////////////////
		// operator []
		T& operator[](size_t pos)
		{
			assert(pos < size());
			return _start[pos];
		}
		const T& operator[](size_t pos)const
		{
			assert(pos < size());

			return _start[pos];
		}

		///////////////modify///////////////////////////////////////
		void push_back(const T& x)
		{
			if (_finish == _endofstorage)
			{
				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;

				reserve(newcapacity);//空间不够扩容
			}
			*_finish = x;
			++_finish;
		}
		void pop_back()
		{
			assert(_start < _finish);//有数据才能pop

			--_finish;
		}
		void swap(Vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_endofstorage, v._endofstorage);
		}
		iterator insert(iterator pos, const T& x)
		{
			assert(pos <= _finish);

			if (_finish == _endofstorage)
			{
				size_t n = pos - _start;//扩容会导致原来位置失效,因此要重新计算pos的位置
				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;

				reserve(newcapacity);
				pos = _start + n;
			}
			iterator end = _finish;
			while (pos <= end)
			{
				*(end + 1) = *end;
				--end;
			}
			*pos = x;
			++_finish;
			return  pos;
		}
		iterator erase(iterator pos)
		{
			assert(pos <= _finish);
			iterator it = pos;
			while (it < _finish)
			{
				*it = *(it + 1);
				++it;
			}
			--_finish;
			return pos;
		}

	private:
		iterator _start;
		iterator _finish;
		iterator _endofstorage;
	};
}