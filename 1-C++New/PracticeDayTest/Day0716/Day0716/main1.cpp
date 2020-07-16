#include <iostream>
#include <vector>

using namespace std;

//红与黑
//DFS深度优先遍历

void maxBlackBlock(vector<vector<char>>& v, int* res, int row, int col)
{
	if (row < 0 || row >= v.size()
		|| col < 0 || col >= v[0].size()
		|| v[row][col] == '#')
	{
		return;
	}
	(*res)++;
	v[row][col] = '#';//走过之后置为#
	maxBlackBlock(v, res, row + 1, col);
	maxBlackBlock(v, res, row - 1, col);
	maxBlackBlock(v, res, row, col + 1);
	maxBlackBlock(v, res, row, col - 1);
}

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		vector<vector<char>> v(m, vector<char>(n));
		int row, col;
		int res = 0;
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin >> v[i][j];
				if (v[i][j] == '@')
				{
					row = i;
					col = j;
				}
			}
		}
		maxBlackBlock(v, &res, row, col);
		cout << res << endl;
	}

	return 0;
}