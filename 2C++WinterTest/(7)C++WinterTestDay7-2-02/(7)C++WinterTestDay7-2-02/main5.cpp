#include <iostream>
#include <vector>

using namespace std;

//寻找数组的中心索引
class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		int len = nums.size();
		int sum = 0;
		int sumleft = 0;
		for (auto & i : nums)
		{
			sum += i;
		}
		for (int j = 0; j < len; ++j)
		{
			if (sumleft * 2 == sum - nums[j])
			{
				return j;
			}
			sumleft += nums[j];
		}
		return -1;
	}
};

int main()
{


	system("pause");
	return 0;
}