#include <iostream>
#include <queue>
#include <functional>
//#include <priority_queue>

using namespace std;

//查找第k小数
int main2()
{
	int n, k;
	while (cin >> n)
	{
		priority_queue<int, vector<int>, greater<int>> pq;//小堆
		int tmp;
		for (int i = 0; i < n; ++i)
		{
			cin >> tmp;
			pq.push(tmp);
		}
		cin >> k;
		tmp = pq.top();//取堆顶
		pq.pop();//删除堆顶数据
		while (k - 1)
		{
			while (tmp == pq.top())//防止有重复数字的情况
			{
				pq.pop();
			}
			tmp = pq.top();
			pq.pop();
			k--;
		}
		cout << tmp << endl;
	}

	return 0;
}