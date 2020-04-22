#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	string replaceSpace(string s) {
		int SpaceCount = 0;
		for (auto& i : s)
		{
			if (i == ' ')
				++SpaceCount;
		}
		int size = s.size();
		int newSize = size + SpaceCount * 2;
		string ret(newSize, '0');
		for (int i = newSize - 1, j = size - 1;
			i >= 0, j >= 0; --i, --j)
		{
			while (j >= 0 && s[j] != ' ')
			{
				ret[i--] = s[j--];
			}
			if (j >= 0 && s[j] == ' ')
			{
				ret[i--] = '0';
				ret[i--] = '2';
				ret[i] = '%';
			}
		}
		return ret;
	}
};

int main()
{
	string s("We are happy.");
	Solution sl;
	sl.replaceSpace(s);

	system("pause");
	return 0;
}