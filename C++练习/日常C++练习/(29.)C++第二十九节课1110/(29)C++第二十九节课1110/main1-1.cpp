#include <iostream>
#include <string>

//输入一个字符串，求出该字符串包含的字符集合
//例如：输入 abcqwerabc    输出  acbwqer
using namespace std;

int main2()
{
	char tmp[101] = { 0 };

	cin >> tmp;
	string src(tmp);

	string dest;

	for (auto & ch : src)
	{
		if (dest.find(ch) == -1)
		{
			dest.push_back(ch);
		}
	}

	cout << dest;

	system("pause");
	return 0;
}