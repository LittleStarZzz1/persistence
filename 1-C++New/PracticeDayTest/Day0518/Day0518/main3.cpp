#include <iostream>
#include <vector>

using namespace std;

//给定一个整数数组 nums，其中恰好有两个元素只出现一次，其余所有元素均出现两次。 找出只出现一次的那两个元素。
class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		vector<int> v;
		int ret = 0;
		for (auto e : nums)
		{
			ret ^= e;
		}

		int num1 = 0, num2 = 0;

		size_t i = 0;
		for (; i < 32; ++i)
		{
			if (ret & (1 << i))
			{
				break;
			}
		}

		for (auto e : nums)
		{
			if ((e >> i) & 1)
			{
				num1 ^= e;
			}
			else
			{
				num2 ^= e;
			}
		}

		v.push_back(num1);
		v.push_back(num2);

		return v;

	}
};

int main()
{

	system("pause");
	return 0;
}