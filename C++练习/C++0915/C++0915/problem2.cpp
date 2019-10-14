#include <iostream>
#include <string>

using namespace std;

//�ҳ��ַ����е�һ��ֻ����һ�ε��ַ�
int firstUniqChar(string s)
{
	int count[26] = { 0 };

	for (auto & ch : s)
	{
		count[ch - 'a']++;
	}

	//���Ժ���
	//int j = 0;
	//for (auto & i : count)
	//{
	//	cout << (char)('a' + j++) << ' ' << i << endl;
	//}

	for (int i = 0; i < s.size(); ++i)
	{
		if (count[s[i] - 'a'] == 1)
		{
			return i;
		}
	}
	return -1;
}

int main2()
{
	string s;
	cin >> s;
	cout << firstUniqChar(s) << endl;


	system("pause");
	return 0;
}