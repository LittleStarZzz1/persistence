#include <iostream>
#include <string>

using namespace std;

//��֤���Ĵ�
class Solution {
public:
	bool isPalindrome(string s) {
		int size = s.size();
		if (size == 0)
			return true;
		string ret;
		for (int i = 0; i < size; ++i)
		{
			if (isalnum(s[i]))
				ret += tolower(s[i]);//ֻ����ԭ�ַ��������ֺ���ĸ, ������ĸȫ��ת��ΪСд
		}
		int len = ret.size();
		int i = 0, j = len - 1;
		for (int i = 0; i < len / 2; ++i)
		{
			if (ret[i] != ret[len - 1 - i])
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