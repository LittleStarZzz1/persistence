#include <iostream>

using namespace std;

//判断是一个数是否是回文数
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
		{
			return false;
		}
		unsigned int sum = 0;
		int tmp;
		for (int i = x; i; i /= 10)
		{
			tmp = i % 10;
			sum = sum * 10 + tmp;
		}
		if (sum == x)
		{
			return true;
		}
		return false;
	}
};

int main()
{

	system("pause");
	return 0;
}