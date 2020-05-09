#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		int index = s.rfind(' ');
		int ret = s.size() - 1 - index;

		cout << ret << ' ';
	}

	system("pause");
	return 0;
}