#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


//翻转字符串
void reverseString(string & s)	//但转制后字符串已经发生变化,所以要传引用
{
	int i, j;
	for (i = 0, j = s.size() - 1; i < j; ++i, --j)
	{
		swap(s[i], s[j]);
	}
}




int main1()
{
	string s1("ikun");

	reverseString(s1);

	cout << s1;


	system("pause");
	return 0;
}