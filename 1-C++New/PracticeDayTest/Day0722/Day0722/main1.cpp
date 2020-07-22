#include <iostream>
#include <string>
#include <map>

using namespace std;

//Æ¹ÅÒÇò
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int len1 = s1.size();
		int len2 = s2.size();
		map<char, int> m1;
		map<char, int> m2;
		for (size_t i = 0; i < len1; ++i)
		{
			m1[s1[i]]++;
		}
		for (size_t i = 0; i < len2; ++i)
		{
			m2[s2[i]]++;
		}
		for (char i = 'A'; i <= 'Z'; ++i)
		{
			if (m1[i] < m2[i])
			{
				cout << "No" << endl;
				break;
			}
			if (i == 'Z')
				cout << "Yes" << endl;
		}
	}


	return 0;
}