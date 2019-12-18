#include <iostream>
#include <vector>

using namespace std;

int main2()
{

	int arr[] = { 2, 5, 1, 3, 4 };
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	for (auto & i : v)
	{
		cout << i << ' ';
	}

	cout << endl;

	system("pause");
	return 0;
}