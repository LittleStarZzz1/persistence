#include <iostream>
#include <vector>

using namespace std;

//数组中重复的数字
class Solution {
public:
	void Swap(int& a, int& b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	int findRepeatNumber(vector<int>& nums) {
		//int size = nums.size();
		//vector<int> tmp(size, 0);
		//for (auto& i : nums)
		//{
		//	if (tmp[i] == 0)
		//		tmp[i]++;
		//	else
		//		return i;
		//}
		//return -1;
		int size = nums.size();
		for (int i = 0; i < size; ++i)
		{
			if (nums[i] != i)
			{
				if (nums[i] == nums[nums[i]])
				{
					return nums[i];
				}
				else{
					Swap(nums[i], nums[nums[i]]);
				}
			}
		}
		return -1;
	}
};

int main()
{


	system("pause");
	return 0;
}