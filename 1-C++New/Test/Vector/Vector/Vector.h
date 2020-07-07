#pragma once

#include <assert.h>

namespace yx
{
	template<class T>
	class Vector
	{
	public:
		typedef T* iterator;//������
		typedef const T* const_iterator;//const������

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
		//���캯��
		Vector() :
			_start(nullptr),
			_finish(nullptr),
			_endofstorage(nullptr)
		{

		}
		//�������캯��
		Vector(const Vector& v)
		{
			size_t _sz = v.capacity();
			 _start = new T[_sz];
			_finish = _start;
			_endofstorage = _start + _sz;

			for (size_t i = 0; i < v.size(); ++i)
			{
				*finish = v[i];//���ݿ���
				++_finish;
			}
		}
		//��ֵ���������
		Vector& operator =(const Vector<T>& v)
		{
			if (this != &v)//�����Լ����Լ���ֵ�Ĳ���
			{
				delete[] _start;//�ͷžɿռ�
				_start = new T[v.capacity()];
				memcpy(_start, v._start, sizeof(T)* v.size());
			}
			return *this;
		}
		//��������
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

				if (_start)//ԭ�����ݲ�Ϊ��, �ͽ����ݿ������¿ռ䵱��, ���ͷžɿռ�
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
				_finish = _start + n;//�µ�sizeС��ԭ����size,�޸�_finishָ���λ�ü���
			}
			else
			{
				if (n > capacity())
				{
					reserve(n);
				}
				
				while (_finish < _start + n)//����ԭ����size,����û�г���capacity,��val���,ֱ��sizeΪn
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

				reserve(newcapacity);//�ռ䲻������
			}
			*_finish = x;
			++_finish;
		}
		void pop_back()
		{
			assert(_start < _finish);//�����ݲ���pop

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
				size_t n = pos - _start;//���ݻᵼ��ԭ��λ��ʧЧ,���Ҫ���¼���pos��λ��
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