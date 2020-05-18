#include <iostream>
#include <vector>

using namespace std;

//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现了三次。找出那个只出现了一次的元素。
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int arr[32] = { 0 };
		for (auto e : nums)
		{
			for (size_t i = 0; i < 32; ++i)
			{
				if (e & (1 << i))
				{
					arr[i]++;
				}
			}
		}

		int n = 0;
		for (size_t i = 0; i < 32; ++i)
		{
			if (arr[i] % 3 == 1)
			{
				n |= (1 << i);
			}
		}
		return n;
	}
};

int main()
{

	system("pause");
	return 0;
}