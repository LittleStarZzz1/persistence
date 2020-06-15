#include <iostream>
#include <string>

using namespace std;

//从第一个字符串中删除第二个字符串中的所有字符
int main()
{
	string s1;
	string s2;

	getline(cin, s1);
	getline(cin, s2);

	int arr[256] = { 0 };

	for (size_t i = 0; i < s2.size(); ++i)
	{
		arr[s2[i]] = 1;//若某一个字符在字符串s2中出现,对应的位置为1
	}

	string ret;//保存结果的字符串
	for (size_t i = 0; i < s1.size(); ++i)
	{
		if (arr[s1[i]] != 1)//若对应位为1, 则表示s2中出现过, 则直接跳过, 什么都不做
			ret += s1[i];
	}

	cout << ret << endl;


	return 0;
}
