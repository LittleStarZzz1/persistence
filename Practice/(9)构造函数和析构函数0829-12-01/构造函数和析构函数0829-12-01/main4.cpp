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
			free(m_data); //�ͷŶ��Ͽռ�
			m_data = NULL; //��ָ����ΪNULL����ֹ��ΪҰָ��
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