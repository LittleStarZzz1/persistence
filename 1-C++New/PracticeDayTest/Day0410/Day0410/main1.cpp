#include <iostream>
#include <vector>

using namespace std;

void reOrderArray(vector<int> &array) {
	int len = array.size();
	int i, j;
	for (i = 1; i < len; ++i)
	{
		if (array[i] % 2 == 0)
			continue;
		int tmp = array[i];
		for (j = i - 1; j >= 0; --j)
		{
			if (array[j] % 2 == 0)
				array[j + 1] = array[j];
			else
				break;
		}
		array[j + 1] = tmp;
	}
}


int main()
{
	vector<int> v = { 1, 2, 3, 4, 5, 6, 7 };
	reOrderArray(v);

	for (auto & i : v)
	{
		cout << i << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}