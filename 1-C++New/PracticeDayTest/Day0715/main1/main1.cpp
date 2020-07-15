#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//×Ö·û´®¼ÆÊý
int main()
{
	string s1, s2;
	int len1, len2;
	while (cin >> s1 >> s2 >> len1 >> len2)
	{
		int size = s2.size();
		if (s1.size() < len2)
			s1.append(len2 - s1.size(), 'a');
		if (s2.size() < len2)
			s2.append(len2 - s2.size(), (char)('z' + 1));
		long long res = 0;
		for (int i = len1; i <= len2; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				res += (s2[j] - s1[j]) * pow(26, i - 1 - j);
			}
		}
		cout << (res - 1) % 1000007 << endl;
	}

}