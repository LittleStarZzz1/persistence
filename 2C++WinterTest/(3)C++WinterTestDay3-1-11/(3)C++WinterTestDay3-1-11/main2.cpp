#include <iostream>

using namespace std;

//�ж���һ�����Ƿ��ǻ�����
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