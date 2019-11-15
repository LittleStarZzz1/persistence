#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

//统计字符串中每个字符出现的次数

int main()
{
	string s;
	cin >> s;

	map<char, int> m;

	for (auto & i : s)
	{
		m[i]++;
	}

	for (auto & i : m)
	{
		cout << i.first << ' ' << i.second << endl;
	}

	system("pause");
	return 0;
}