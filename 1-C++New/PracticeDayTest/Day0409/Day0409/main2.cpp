#include <iostream>

using namespace std;

//二进制中1的个数
class Solution {
public:
	int  NumberOf1(int n) {
		/*int count = 0;
		for (int i = 0; i < 32; ++i)
		{
		if ((n >> i) & 1 == 1)
		++count;
		}
		return count;*/
		int count = 0;
		while (n != 0)
		{
			n = n & (n - 1);
			++count;
		}
		return count;
	}
};

int main()
{

	system("pause");
	return 0;
}