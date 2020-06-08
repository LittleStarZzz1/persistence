#include <iostream>

using namespace std;

class Solution {
public:
	int cuttingRope(int n) {
		if (n <= 3)
			return n - 1;

		int a = n % 3;
		int b = n / 3;

		if (a == 0)
			return pow(3, b);
		else if (a == 1)
		{
			return pow(3, b - 1) * 4;//1 + 3�滻Ϊ2 + 2
		}
		else
			return pow(3, b) * 2;
	}
};

int main()
{

	system("pause");
	return 0;
}