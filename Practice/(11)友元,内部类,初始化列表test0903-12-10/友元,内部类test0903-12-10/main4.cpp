#include <iostream>

using namespace std;

class Array
{
	int * m_array;
	int m_size;
public:
	Array(int size) :
		m_size(size),
		m_array((int *)malloc(sizeof(int)* m_size))
	{

	}
};

int main4()
{
	Array a(1);

	system("pause");
	return 0;
}