#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//将一句话中的单词逆置
int main()
{
	string s;
	while (getline(cin, s))
	{
		reverse(s.begin(), s.end());

		string::iterator it = s.begin();
		string::iterator end = it;

		while (end != s.end())
		{
			while (end != s.end() && *end != ' ')
				++end;
			reverse(it, end);
			if (end != s.end())
			{
				it = end + 1;
				end = it;
			}
		}
		cout << s << endl;
	}
	return 0;
}