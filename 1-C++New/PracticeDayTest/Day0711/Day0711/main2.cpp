#include <iostream>
#include <queue>
#include <functional>
//#include <priority_queue>

using namespace std;

//���ҵ�kС��
int main2()
{
	int n, k;
	while (cin >> n)
	{
		priority_queue<int, vector<int>, greater<int>> pq;//С��
		int tmp;
		for (int i = 0; i < n; ++i)
		{
			cin >> tmp;
			pq.push(tmp);
		}
		cin >> k;
		tmp = pq.top();//ȡ�Ѷ�
		pq.pop();//ɾ���Ѷ�����
		while (k - 1)
		{
			while (tmp == pq.top())//��ֹ���ظ����ֵ����
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