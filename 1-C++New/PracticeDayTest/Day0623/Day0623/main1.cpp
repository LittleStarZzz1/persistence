#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//动态规划问题
//查找两个字符串a,b中最长公共子串
string maxlengthSubstr(string& s1, string& s2)
{
	if (s1.size() > s2.size())
		swap(s1, s2);//s1用来保存长度较小的字符串
	int len1 = s1.size();
	int len2 = s2.size();
	int maxLen = 0, begin = 0;
	vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));

	for (int i = 1; i <= len1; ++i)
	{
		for (int j = 1; j < len2; ++j)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
				if (maxLen < dp[i][j])
				{
					maxLen = dp[i][j];
					begin = i - maxLen;
				}
			}
		}
	}
	return s1.substr(begin, maxLen);
}

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		cout << maxlengthSubstr(s1, s2) << endl;
	}

	return 0;
}