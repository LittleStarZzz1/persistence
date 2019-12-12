#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
	bool wordBreak(string s, unordered_set<string> &dict) {
		int len = s.size();
		vector<bool> v(len + 1, false);
		v[0] = true;
		for (int i = 1; i <= len; ++i)
		{
			for (int j = i - 1; j >= 0; --j)
			{
				if (v[j] && j < i && dict.find(s.substr(j, i - j)) != dict.end())
				{
					v[i] = true;
				}
			}
		}
		return v[len];
	}
};

int main1()
{


	system("pause");
	return 0;
}