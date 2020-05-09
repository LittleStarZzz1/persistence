#include <iostream>
#include <string>

using namespace std;

//字符串区间部分翻转
class Solution {
public:
	void _reverseStr(string& s, int left, int right)
	{
		while (left < right)
		{
			swap(s[left], s[right]);
			++left;
			--right;
		}
	}

	string reverseStr(string s, int k) {
		int len = s.size();
		if (k > len)
		{
			_reverseStr(s, 0, len - 1);
			return s;
		}
		int left = 0, right = 0;
		int i;
		for (i = 0; i + k * 2 < len; i = i + k * 2)
		{
			left = i;
			right = i + k - 1;
			_reverseStr(s, left, right);
		}
		if (len - i + 1 < k)
		{
			_reverseStr(s, i, len - 1);
		}
		else
		{
			_reverseStr(s, i, i + k - 1);
		}
		return s;

	}
};

int main()
{


	system("pause");
	return 0;
}