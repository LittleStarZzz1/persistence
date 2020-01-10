#include <iostream>
#include <vector>

using namespace std;

//给定一个数组nums和一个值val,你需要原地移除所有数值等于val的元素,返回移除后数组的新长度
class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
#if 0
		int len = nums.size();
		//判空,为空直接返回0
		if (len == 0)
		{
			return 0;
		}
		int i = 0;
		//类似于双指针操作
		for (int j = 0; j < len; ++j)
		{
			if (nums[j] != val)
			{
				nums[i] = nums[j];
				i++;
			}
		}
		//此时i==0说明容器中只有一个数字且与val相等,直接返回0即可
		if (i == 0)
		{
			return 0;
		}
		return i;
#else 1
		int len = nums.size();
		int i = 0;
		while (i < len)
		{
			if (nums[i] == val)
			{
				nums[i] = nums[len - 1];
				len--;
			}
			else
			{
				i++;
			}
		}
		return len;

#endif
	}
};

int main()
{


	system("pause");
	return 0;
}