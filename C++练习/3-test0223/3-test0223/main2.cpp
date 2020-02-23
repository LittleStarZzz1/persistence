#include <iostream>

using namespace std;

//内置类型数组
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	cout << " arr : " << endl;
	for (auto & i : arr)
	{
		cout << i << ' ';
	}
	cout << endl;

	int arr1[5] { 1, 2, 3, 4, 5 };
	cout << " arr1 : " << endl;
	for (auto & i : arr1)
	{
		cout << i << ' ';
	}
	cout << endl;

	int arr2[] { 1, 2, 3, 4, 5 };
	cout << " arr2 : " << endl;
	for (auto & i : arr2)
	{
		cout << i << ' ';
	}
	cout << endl;



	system("pause");
	return 0;
}