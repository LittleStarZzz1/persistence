#include <iostream>
#include <vector>

using namespace std;

//旋转数组
class Solution {
public:
#if 0
	void rotate(vector<int>& nums, int k) {
		int len = nums.size();
		vector<int> res(len, 0);
		int j = 0;
		for (int i = len - 1 - k; i < len; ++i)
		{
			res[j++] = nums[i];
		}
		for (int i = 0; i < len - 1 - k; ++i)
		{
			res[j] = nums[i];
			j++;
		}
	}
#elif 0
	void rotate(vector<int>& nums, int k) {
		int len = nums.size();
		k %= len;
		vector<int> tmp;
		tmp = nums;
		for (int i = 0; i < len; ++i)
		{
			tmp[(i + k) % len] = nums[i];
		}
		for (int i = len - 1; i > k - 1; --i)
		{

			nums[i] = nums[i - k];
		}
		for (int i = 0; i < k; ++i)
		{
			nums[i] = tmp[i];
		}
	}
#elif 0
	//时间复杂度较高
	void rotate(vector<int>& nums, int k) {
		int len = nums.size();
		int last = nums[len - 1];
		for (int i = 0; i < k; ++i)
		{
			for (int j = len - 1; j > 0; --j)
			{
				nums[j] = nums[j - 1];
			}
			nums[0] = last;
			last = nums[len - 1];
		}
	}
#elif 1
	void reverseArr(vector<int> & num, int left, int right)
	{
		while (left < right)
		{
			int tmp = num[left];
			num[left] = num[right];
			num[right] = tmp;
			left++;
			right--;
		}
	}
	void rotate(vector<int>& nums, int k) {
		int len = nums.size();
		k %= len;
		reverseArr(nums, 0, len - 1);
		reverseArr(nums, 0, k - 1);
		reverseArr(nums, k, len - 1);
	}

#endif
};

int main()
{


	system("pause");
	return 0;
}