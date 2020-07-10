#include <iostream>
#include <string>
#include <vector>
//#include <algorithm>

using namespace std;

//³­ËÍÁĞ±í, ×Ö·û´®½âÎö
int main()
{
	string s1, s2;
	while (getline(cin, s1))
	{
		getline(cin, s2);
		vector<string> v;
		string tmp;
		for (size_t i = 0; i < s1.size(); ++i)
		{
			tmp.clear();
			if (s1[i] == '\"')
			{
				++i;
				while (i < s1.size() && s1[i] != '\"')
				{
					tmp += s1[i];
					++i;
				}
				v.push_back(tmp);
			}
			else if (s1[i] == ',')
			{
				continue;
			}
			else
			{
				while (i < s1.size() && s1[i] != ',')
				{
					tmp += s1[i];
					++i;
				}
				v.push_back(tmp);
			}
		}

		/*if (find(v,begin(), v.end(), s2) != v.end())
		cout << "Ignore" << endl;
		else
		cout << "Important!" << endl;*/
		int flag = 0;
		for (auto& str : v)
		{
			if (str == s2)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			cout << "Ignore" << endl;
		else
			cout << "Important!" << endl;
	}

	return 0;
}