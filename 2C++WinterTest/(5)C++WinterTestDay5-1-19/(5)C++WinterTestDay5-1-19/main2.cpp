#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		int len = nums.size();
		//for (int i = 0; i < len - 1; ++i)
		//{
		//	for (int j = 0; j < len - i - 1; ++j)
		//	{
		//		if (nums[j] > nums[j + 1])
		//		{
		//			int tmp = nums[j];
		//			nums[j] = nums[j + 1];
		//			nums[j + 1] = tmp;
		//		}
		//	}
		//}
		sort(nums.begin(), nums.end());

		for (int i = 0; i < len - 1; ++i)
		{
			if (nums[i] == nums[i + 1])
			{
				return true;
			}
		}
		return false;
	}
};

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(1);

	for (auto & e : v)
	{
		cout << e << endl;
	}
	Solution s;
	s.containsDuplicate(v);



	system("pause");
	return 0;
}