#include <iostream>
#include <vector>
#include <string>

using namespace std;

//µ•¥ µπ≈≈
int main()
{
	string s;
	while (getline(cin, s))
	{
		vector<string> v;
		string tmp;
		for (size_t i = 0; i < s.size(); ++i)
		{
			if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
			{
				tmp += s[i];
			}
			else
			{
				if (tmp.size() > 0)
				{
					v.push_back(tmp);
					tmp.clear();
				}
			}
		}
		if (tmp.size() > 0)
			v.push_back(tmp);
		for (size_t i = v.size() - 1; i > 0; --i)
		{
			cout << v[i] << ' ';
		}
		cout << v[0] << endl;
	}

	return 0;
}