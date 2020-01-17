#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) {
		int count = 0;
		int len = s.size();
		int i = len - 1;
		while (s[i] == ' ')
		{
			--i;
			if (i < 0)
			{
				return 0;
			}
		}
		for (; i >= 0; --i)
		{
			if (s[i] == ' ')
			{
				break;
			}
			++count;
		}
		return count;
	}
};

int main()
{
	string s("a ");

	cout << s.size();

	system("pause");
	return 0;
}