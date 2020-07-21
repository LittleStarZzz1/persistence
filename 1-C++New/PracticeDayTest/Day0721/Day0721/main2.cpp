#include <iostream>
#include <string>

using namespace std;

//ÂæÍÕÃüÃû
int main()
{
	string s;
	while (cin >> s)
	{
		for (size_t i = 0; i < s.size(); ++i)
		{
			if (i > 0 && s[i] == '_')
			{
				s[i + 1] -= 32;
			}
			else
				cout << s[i];
		}
		cout << endl;
	}

	return 0;
}