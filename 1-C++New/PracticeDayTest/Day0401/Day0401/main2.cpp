#include <iostream>

using namespace std;

class Solution {
public:
	void replaceSpace(char *str, int length) {
		//�����п�
		if (str == NULL || length < 0)
			return;
		//��������ո�����, ԭ�ַ�������
		int oldLen = 0;
		int spaceNum = 0;
		int i = 0;
		while (str[i] != '\0')
		{
			if (str[i] == ' ')
			{
				spaceNum++;
			}
			oldLen++;
			i++;
		}
		int newLen = oldLen + spaceNum * 2;
		if (newLen > length)
			return;
		//�Ӻ���ǰ,�Ȱ�'\0'����str
		str[newLen] = '\0';
		for (int i = newLen - 1, j = oldLen - 1; i >= 0 && j >= 0; --i, --j)
		{
			while (str[j] == ' ')
			{
				str[i--] = '0';
				str[i--] = '2';
				str[i--] = '%';
				j--;
			}
			str[i] = str[j];
		}
	}
};

int main()
{

	system("pause");
	return 0;
}