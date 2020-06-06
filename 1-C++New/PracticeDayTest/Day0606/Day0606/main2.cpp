#include <iostream>
#include <vector>

using namespace std;

//��Ҫ2
// m * n������, ÿ������֮����Է�һ������, �������鵰���ŷ����þ��벻��Ϊ2
int MaxNum(vector<vector<int>>& v)
{
	int row = v.size();//row��
	int col = v[0].size();//col��

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
