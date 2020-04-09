#include <iostream>

using namespace std;

//���θ���
class Solution {
public:
	int rectCover(int number) {
		if (number <= 2)
			return number;
		//쳲���������, f(n) = f(n - 1) + f(n - 2)
		int a_1 = 1, a_2 = 2;
		int ret = 0;
		while (number-- > 2)
		{
			ret = a_1 + a_2;
			a_1 = a_2;
			a_2 = ret;
		}
		return ret;
	}
};

int main()
{

	system("pause");
	return 0;
}