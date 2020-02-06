#include <iostream>
#include <string>

using namespace std;

//×Ö·û´®×ª»»ÕûÊý
class Solution {
public:
	int myAtoi(string str) {
		int sum = 0;
		int i = 0;
		int flag = 1;
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] == '-')
		{
			flag = -1;
		}
		if (str[i] == '+' || str[i] == '-')
		{
			i++;
		}
		while (i < str.size() && isdigit(str[i]))
		{
			int tmp = str[i] - '0';
			if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && tmp > 7))
			{
				return flag > 0 ? INT_MAX : INT_MIN;
			}
			sum = sum * 10 + tmp;
			i++;
		}
		return flag *sum;
	}
};



int main4()
{


	system("pause");
	return 0;
}