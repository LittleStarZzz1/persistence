#include <iostream>
#include <string>

using namespace std;

//读入一个字符串,输出字符串中连续最长的数字串
string continuousNum(const string& str)
{
	string ret, cur;
	for (size_t i = 0; i <= str.size(); ++i)
	{
		if (isdigit(str[i]))
		{
			cur += str[i];
		}
		else
		{
			if (ret.size() < cur.size())
			{
				ret = cur;
				cur.clear();
			}
			else
			{
				cur.clear();
			}
		}
	}
	return ret;
}

int main()
{
	string s;
	cin >> s;

	string ret;
	ret = continuousNum(s);

	cout << ret << endl;


	system("pause");
	return 0;
}