#include <iostream>
#include <string>

using namespace std;

//找到字符串第一次只出现一次的字符,找到后返回下标
int firstUniqChar(string s)
{
	int count[26] = { 0 };

	for (auto & i : s)
	{
		count[i - 'a']++;
	}

	for (int i = 0; i < s.size(); ++i)
	{
		if (count[s[i] - 'a'] == 1)
		{
			return i;
		}
	}
	return -1;
}

int main()
{ 
	string s;

	cin >> s;

	cout << firstUniqChar(s) << endl;

	system("pause");
	return 0;
}