#include <iostream>
#include <string>

//����һ���ַ�����������ַ����������ַ�����
//���磺���� abcqwerabc    ���  acbwqer
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