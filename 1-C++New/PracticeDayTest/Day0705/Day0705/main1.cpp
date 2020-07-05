#include <iostream>
#include <vector>

class Solution {
public:
	/**
	*  奇数位上都是奇数或者偶数位上都是偶数
	*  输入：数组arr，长度大于2
	*  len：arr的长度
	*  将arr调整成奇数位上都是奇数或者偶数位上都是偶数
	*/
	void oddInOddEvenInEven(std::vector<int>& arr, int len) {
		int i = 0;
		int j = 1;
		while (i < len && j < len)
		{
			if (arr[len - 1] % 2 == 0)
			{
				std::swap(arr[len - 1], arr[i]);
				i += 2;
			}
			else
			{
				std::swap(arr[len - 1], arr[j]);
				j += 2;
			}
		}
	}
};

int main1()
{

	return 0;
}