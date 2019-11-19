#include <iostream>
#include <typeinfo>

using namespace std;

//void TestAuto(int array[])
//{
//	for (auto & i : array)
//	{
//		cout << i << endl;
//	}
//}

int main()
{
	int array[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(array) / sizeof(array[0]);
	//for (int i = 0; i < n; ++i)
	//{
	//	cout << array[i] << ' ';
	//}
	//cout << endl;

	for (int * p = array; p < array + n; ++p)
	{
		cout << *p << ' ';
	}
	cout << endl;

	for (auto & i : array)
	{
		i *= 2;
	}



	for (auto & i : array)
	{
		cout << i << ' ';
	}

	cout << endl;

	system("pause");
	return 0;
}