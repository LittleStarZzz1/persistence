#include <iostream>
#include <string>

using namespace std;

//�ҵ��ַ�����һ��ֻ����һ�ε��ַ�,�ҵ��󷵻��±�
int firstUniqChar(string s)
{
	int count[26] = { 0 };

	for (auto & i : s)
	{
		count[i - 'a']++;
	}

	for (int i = 0; i < s.size(); ++i)
	{
		if (count[s[i] - 'a'] == 1)
		{
			return i;
		}
	}
	return -1;
}

int main()
{ 
	string s;

	cin >> s;

	cout << firstUniqChar(s) << endl;

	system("pause");
	return 0;
}