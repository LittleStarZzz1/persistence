#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//最长公共子序列, 动态规划问题
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int row = s2.size();
		int col = s1.size();
		vector<vector<int>> v(row, vector<int>(col, 0));
		if (s1[0] == s2[0])
			v[0][0] = 1;
		for (int i = 1; i < col; ++i)
		{
			if (s1[i] == s2[0])
				v[0][i] = 1;
			v[0][i] = max(v[0][i - 1], v[0][i]);
		}
		for (int j = 1; j < row; ++j)
		{
			if (s1[0] == s2[j])
				v[j][0] = 1;
			v[j][0] = max(v[j - 1][0], v[j][0]);
		}

		for (int i = 1; i < row; ++i)
		{
			for (int j = 1; j < col; ++j)
			{
				v[i][j] = max(v[i - 1][j], v[i][j - 1]);
				if (s1[j] == s2[i])
					v[i][j] = max(v[i][j], v[i - 1][j - 1] + 1);
			}
		}
		cout << v[row - 1][col - 1] << endl;
	}

	return 0;
}