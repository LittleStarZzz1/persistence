#include <iostream>

using namespace std;



int main()
{
	int n, m;
	int tmp;
	cin >> n;
	cin >> m;

	int arr[100];

	cout << "输入数组的值";
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (i == 0)
		{
			cout << "0" << endl;
		}

		tmp = arr[i];

		for (int j = i - 2; j >= i - m - 1 && j >= 0; --j)
		{
			if (arr[j] < tmp)
			{
				tmp = arr[j];
			}
		}
		cout << tmp;
	}



	system("pause");
	return 0;
}