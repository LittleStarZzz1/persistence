#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int minCut(string s) {
		int len = s.size();
		vector<int> v;
		for (int i = 0; i < len + 1; ++i)
		{
			v.push_back(i - 1);
		}

		for (int i = 1; i < len + 1; ++i)
		{
			for (int j = 0; j < i; ++j)
			{
				if (IsPalindrome(s, j, i - 1))
				{
					v[i] = min(v[i], v[j] + 1);
				}
			}
		}
		return v[len];
	}
	bool IsPalindrome(string s, int i, int j)
	{
		while (i < j)
		{
			if (s[i] != s[j])
			{
				return false;
			}
			i++;
			j--;
		}
		return true;
	}
};

int main()
{



	system("pause");
	return 0;
}