#include <iostream>

//不用加减乘除做加法
class Solution {
public:
	int Add(int num1, int num2)
	{
		int sum = 0;
		int flag = 0;
		while (num2 != 0)
		{
			sum = num1 ^ num2;//在不考虑进位的情况下得到两数相加的结果
			flag = (num1 & num2) << 1;//考虑进位，两数相与若为1则表示需要向前一位进1，因此左移1位
			num1 = sum;
			num2 = flag;//考虑进位
		}
		return num1;
	}
};

int main()
{

	return 0;
}