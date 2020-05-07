#include <iostream>
#include <string>

using namespace std;

//字符串相加, 即大数相加
class Solution {
public:
	string addStrings(string num1, string num2) {
		int len1 = num1.size();
		int len2 = num2.size();
		int count = abs(len1 - len2);

		if (len1 > len2)
			num2.insert(0, count, '0');
		else if (len1 < len2)
			num1.insert(0, count, '0');

		int len = num1.size();
		string ret;
		ret.resize(len);
		int step = 0;
		for (int i = len - 1; i >= 0; --i)
		{
			ret[i] = (num1[i] - '0') + (num2[i] - '0') + step + '0';

			if (ret[i] > '9')
			{
				ret[i] -= 10;
				step = 1;
			}
			else
				step = 0;
		}
		if (step == 1)
			ret.insert(0, 1, '1');
		return ret;
	}
};

int main()
{


	system("pause");
	return 0;
}