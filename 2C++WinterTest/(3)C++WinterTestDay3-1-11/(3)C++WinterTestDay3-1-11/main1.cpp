#include <iostream>

using namespace std;

//����һ�������(ransom)�ַ�����һ����־(magazine)�ַ���
//�жϵ�һ���ַ��� ransom �ܲ����ɵڶ����ַ��� magazines ������ַ�����.
//������Թ���,���� true;���򷵻� false

class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		if (ransomNote.size() > magazine.size())
		{
			return false;
		}
		int a[26] = { 0 };
		for (int i = 0; i < magazine.size(); ++i)
		{
			a[magazine[i] - 'a']++;
		}
		for (int i = 0; i < ransomNote.size(); ++i)
		{
			if (--a[ransomNote[i] - 'a'] < 0)
			{
				return false;
			}
		}
		return true;
	}
};

int main()
{


	system("pause");
	return 0;
}