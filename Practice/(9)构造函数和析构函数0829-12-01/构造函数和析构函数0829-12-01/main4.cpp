#include <iostream>
#include <assert.h>

using namespace std;

typedef int DataType;

class SeqList
{
	int * m_data;
	size_t m_size;
	size_t m_capacity;
public:
	SeqList(int capacity = 10)
	{
		m_data = (DataType *)malloc(capacity * sizeof(DataType));
		assert(m_data);

		m_size = 0;
		m_capacity = capacity;
	}

	~SeqList()
	{
		if (m_data)
		{
			free(m_data); //释放堆上空间
			m_data = NULL; //将指针置为NULL，防止变为野指针
			m_capacity = 0;
			m_size = 0;
		}
	}

};

int main5()
{


	system("pause");
	return 0;
}