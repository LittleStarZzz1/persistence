#include <iostream>
#include <string>
#include <vector>

using namespace std;

//找出字符串中第一个只出现一次的字符;
int main()
{
	string s;
	int i;
	while (cin >> s)
	{
		vector<int> v(128, 0);
		int size = s.size();
		for (i = 0; i < size; ++i)
		{
			v[s[i] - ' ']++;
		}
		int lenth = v.size();
		for (i = 0; i < size; ++i)
		{
			if (v[s[i] - ' '] == 1)
			{
				cout << s[i] << endl;
				break;
			}
		}
		if (i == size)
		{
			cout << -1 << endl;
		}
	}


	return 0;
}