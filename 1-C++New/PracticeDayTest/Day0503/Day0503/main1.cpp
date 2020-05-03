#include <iostream>
#include <string>
#include <vector>

using namespace std;

//找到字符串中第一个只出现一次的字符
class Solution {
public:
	int firstUniqChar(string s) {
		int size = s.size();
		if (size == 0)
			return -1;
		vector<int> v(26, 0);
		for (int i = 0; i < size; ++i)
		{
			v[s[i] - 'a']++;
		}
		for (int i = 0; i < size; ++i)
		{
			if (v[s[i] - 'a'] == 1)
				return i;
		}
		return -1;
	}
};

int main()
{

	system("pause");
	return 0;
}