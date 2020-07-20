
#include <iostream>
#include <set>
#include <string>

using namespace std;

//µç»°ºÅÂë
int main()
{
	string NUM = "22233344455566677778889999";
	int n;
	while (cin >> n)
	{
		string res;
		set<string> s;
		for (int i = 0; i < n; ++i)
		{
			string tmp;
			cin >> tmp;
			int flag = 0;
			for (size_t j = 0; j < tmp.size(); ++j)
			{
				if (tmp[j] <= 'Z' && tmp[j] >= 'A')
				{
					res += NUM[tmp[j] - 'A'];
					flag++;
					if (flag == 3)
						res += '-';
				}
				else if (tmp[j] >= '0' && tmp[j] <= '9')
				{
					res += tmp[j];
					flag++;
					if (flag == 3)
						res += '-';
				}
			}
			s.insert(res);
			res.clear();
		}
		set<string>::iterator sit = s.begin();
		for (; sit != s.end(); ++sit)
		{
			cout << (*sit) << endl;
		}
		cout << endl;
	}

	return 0;
}