#include <iostream>
#include <string>

using namespace std;

//将字符串中的大写字母转换成小写字母

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