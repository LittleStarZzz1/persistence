#include <iostream>
#include <map>
#include <string>

using namespace std;


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