#include <iostream>


class Solution {
public:
	int climbStairs(int n) {
		if (n == 0 || n == 1)
			return 1;
		int a_1 = 1, a_2 = 1;
		int sum = 0;
		while (n-- > 1)
		{
			sum = a_1 + a_2;
			a_1 = a_2;
			a_2 = sum;
		}
		return sum;
	}
};

int main()
{


	system("pause");
	return 0;
}