#include <iostream>
#include <string>

using namespace std;

//翻转字符串中的每个单词
class Solution {
public:
	string reverseWords(string s) {
		int len = s.size();
		int left = 0, right = 0;
		for (int i = 0; i < len; ++i)
		{
			if (s[i] == ' ')
			{
				right = i - 1;
				while (left < right)
				{
					swap(s[left], s[right]);
					left++;
					right--;
				}
				left = i + 1;
			}
		}
		right = len - 1;
		while (left < right)
		{
			swap(s[left], s[right]);
			left++;
			right--;
		}
		return s;
	}
};

int main()
{


	system("pause");
	return 0;
}