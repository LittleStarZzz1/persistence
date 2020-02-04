#include <iostream>
#include <vector>

using namespace std;

//两数之和
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int len = nums.size();
		vector<int> res(2);
		for (int i = 0; i < len; ++i)
		{
			for (int j = i + 1; j < len; ++j)
			{
				if (nums[j] + nums[i] == target)
				{
					res[0] = i;
					res[1] = j;
					return res;
				}
			}
		}
		return res;
	}
};

int main3()
{


	system("pause");
	return 0;
}