#include <iostream>

using namespace std;

class Solution {
public:
	double Power(double base, int exponent) {
		if (base == 0 && exponent == 0)
			return 1;
		if (base == 0 && exponent < 0)
		{
			std::cout << "分母不能为0" << std::endl;
			return 0;
		}
		if (base == 0)
			return 0;
		int n = abs(exponent);
		double ret = 1;
		//快速幂算法
		while (n)
		{
			if ((n & 1) == 1)
			{
				ret *= base;
			}
			n >>= 1;
			base *= base;
		}
		return exponent > 0 ? ret : 1 / ret;
	}
};

int main()
{
	//cout << pow(0, 0) << endl;  0^0 == 1;

	system("pause");
	return 0;
}