#include <iostream>
#include <vector>

using namespace std;

//排序子序列问题
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		vector<int> v;
		v.resize(n + 1);//多开辟一个空间防止数组越界
		v[n] = 0;
		for (int i = 0; i < n; ++i)//接收输入仍然是n个
		{
			cin >> v[i];
		}

		for (int i = 0; i < n; ++i)
		{
			if (v[i] < v[i + 1])//进入非递减序列的判断
			{
				while (i < n && v[i] <= v[i + 1])
					++i;
				++count;
			}
			else if (v[i] == v[i + 1])
				continue;
			else //进入非递增序列判断, 即 v[i] > v[i + 1]
			{
				while (i < n && v[i] > v[i + 1])
					++i;
				++count;
			}
		}
		cout << count << endl;
	}
	return 0;
}