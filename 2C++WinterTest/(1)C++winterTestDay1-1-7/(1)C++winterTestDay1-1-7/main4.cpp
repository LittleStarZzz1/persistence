#include <iostream>
#include <string>

using namespace std;

//���ַ����еĴ�д��ĸת����Сд��ĸ

class Solution {
public:
	string toLowerCase(string str) {
		int len = str.size();
		for (int i = 0; i < len; ++i)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}
		return str;
	}
};

int main()
{


	

	system("pause");
	return 0;
}