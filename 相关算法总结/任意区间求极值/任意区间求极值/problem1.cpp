#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

//给定一个数组, 可以求任意区间的极值

int d[10000][10000];
int a[10000];

namespace nj
{
	void Init(int n)
	{
		for (int i = 1; i <= n; ++i)
		{
			d[i][0] = a[i];
		}

		for (int j = 1; (1 << j) <= n; ++j)
		{
			for (int i = 1; i + (1 << j) - 1 <= n; ++i)
			{
				d[i][j] = max(d[i][j - 1], d[i + (1 << (j - 1))][j - 1]);
			}
		}
	}

	int query(int l, int r)
	{
		int k = log2(r - l + 1);
		return max(d[l][k], d[r - (1 << k) + 1][k]);
	}
}

int main(){

	a[1] = 13;
	a[2] = 2;
	a[3] = -6;
	a[4] = 8;
	a[5] = 17;
	a[6] = -9;
	a[7] = 12;
	a[8] = -5;
	a[9] = 18;

	nj::Init(9);

	int i = nj::query(1, 9);

	cout << i << endl;


	system("pause");
	return 0;
}