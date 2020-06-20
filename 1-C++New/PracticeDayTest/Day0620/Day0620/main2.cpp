#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//大数加法
string BigAdd(string& s1, string& s2)
{
	string ret;
	int len1 = s1.size();
	int len2 = s2.size();
	int length = abs(len1 - len2);
	if (len1 > len2)
		s2.insert(0, length, '0');//补0
	else
		s1.insert(0, length, '0');
	int flag = 0;//用来保存进位
	ret.resize(s1.size());
	for (int i = s1.size() - 1; i >= 0; --i)
	{
		int tmp = s1[i] - '0' + (s2[i] - '0') + flag;
		if (tmp > 9)
		{
			flag = 1;//进位置为1
			ret[i] = (tmp % 10) + '0';//将数字转回字符
		}
		else
		{
			flag = 0;
			ret[i] = (tmp + '0');//将数字转回字符
		}
	}
	if (flag == 1)//表示最后任然需要进位
	{
		ret.insert(0, 1, '1');
	}
	return ret;
}

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		string ret = BigAdd(s1, s2);
		cout << ret << endl;
	}

	return 0;
}