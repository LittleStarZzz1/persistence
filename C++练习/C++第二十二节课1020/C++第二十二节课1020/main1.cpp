#include <iostream>

using namespace std;

template <class T, size_t N = 10>
class Array
{
	T m_data[N];

public:

	Array()
	{
		cout << N << endl;
	}

};

int main1()
{
	//Array<int> b;
	Array<int, 100> a;

	system("pause");
	return 0;
}