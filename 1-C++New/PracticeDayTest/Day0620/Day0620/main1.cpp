#include <iostream>
#include <vector>

using namespace std;

//杨辉三角变形
int findEvenNum(vector<vector<int>>& v, const int n)
{
	int ret = 0;
	v[0][n - 1] = 1;//第一行第n个元素赋值为1
	for (int i = 1; i < n; ++i)
	{
		v[i][n - i - 1] = 1;//每一行第一个元素赋值为1
		v[i][n + i - 1] = 1;//每一行最后一个元素赋值为1
		for (int j = 1; j < n * 2 - 2; ++j)
		{
			v[i][j] = v[i - 1][j] + v[i - 1][j - 1] + v[i - 1][j + 1];
			if (i == n - 1 && v[i][j] % 2 == 0)
			{
				ret = j + 1;
				break;
			}
		}
	}
	return ret;
}

int main()
{
	int n;
	while (cin >> n)
	{
		vector<vector<int>> v(n, vector<int>(2 * n - 1, 0));//n行, 2 * n - 1列

		cout << findEvenNum(v, n) << endl;
	}


	return 0;
}