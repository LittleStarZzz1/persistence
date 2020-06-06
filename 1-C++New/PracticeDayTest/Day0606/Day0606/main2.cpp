#include <iostream>
#include <vector>

using namespace std;

//不要2
// m * n的网格, 每个格子之多可以放一个蛋糕, 任意两块蛋糕的欧几里得距离不能为2
int MaxNum(vector<vector<int>>& v)
{
	int row = v.size();//row行
	int col = v[0].size();//col列

	int count1 = (col / 4 * 2) + (col % 4 < 2 ? col % 4 : 2);
	int count2 = ((col - 2) / 4 * 2) + ((col - 2) % 4 < 2 ? (col - 2) % 4 : 2);

	int res = (row / 4) * (count1 + count2) * 2;

	if (row % 4 == 1)
		res += count1;
	if (row % 4 == 2)
		res = res + count1 * 2;
	if (row % 4 == 3)
		res = res + count1 * 2 + count2;
	return res;
}

int main()
{
	vector<vector<int>> v;
	int row, col;
	while (cin >> row >> col)
	{
		v.resize(row);
		v[0].resize(col);

		cout << MaxNum(v) << endl;
	}

	system("pause");
	return 0;
}
