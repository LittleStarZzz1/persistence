#include <iostream>
#include <string>

using namespace std;

//�ӵ�һ���ַ�����ɾ���ڶ����ַ����е������ַ�
int main()
{
	string s1;
	string s2;

	getline(cin, s1);
	getline(cin, s2);

	int arr[256] = { 0 };

	for (size_t i = 0; i < s2.size(); ++i)
	{
		arr[s2[i]] = 1;//��ĳһ���ַ����ַ���s2�г���,��Ӧ��λ��Ϊ1
	}

	string ret;//���������ַ���
	for (size_t i = 0; i < s1.size(); ++i)
	{
		if (arr[s1[i]] != 1)//����ӦλΪ1, ���ʾs2�г��ֹ�, ��ֱ������, ʲô������
			ret += s1[i];
	}

	cout << ret << endl;


	return 0;
}
