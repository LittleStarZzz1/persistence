#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


//��ת�ַ���
void reverseString(string & s)	//��ת�ƺ��ַ����Ѿ������仯,����Ҫ������
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