#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//字符串的编辑距离
int LevenshteinDistance(const string& s1, const string& s2)
{
	int row = s1.size();
	int col = s2.size();
	vector<vector<int>> v(row + 1, vector<int>(col + 1, 0));
	//v[i][j]表示字符串s1[0, i]到字符串s2[0, j]的编辑距离距离
	//对边界值进行初始化
	for (int i = 1; i <= col; ++i)
	{
		v[0][i] = i;//表示字符串s1[1, i]到空字符串的编辑距离
	}
	for (int j = 1; j <= row; ++j)
	{
		v[j][0] = j;//表示空字符串到字符串s2[1, j]的编辑距离
	}

	for (int i = 1; i <= row; ++i)
	{
		for (int j = 1; j <= col; ++j)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				v[i][j] = v[i - 1][j - 1];//新增字符相等,不进行操作
			}
			else
			{
				v[i][j] = v[i - 1][j - 1] + 1;//新增字符不相等,操作次数(替换)+1
			}
			v[i][j] = min(v[i][j], v[i - 1][j] + 1);
			v[i][j] = min(v[i][j], v[i][j - 1] + 1);
		}
	}
	return v[row][col];
}

int main()
{
	string s1;
	string s2;
	while (getline(cin, s1) && getline(cin, s2))
	{
		cout << LevenshteinDistance(s1, s2) << endl;
	}


	return 0;
}