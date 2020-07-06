#include <iostream>
#include <vector>

using namespace std;

//求正数数组的最小不可组成和
//动态规划
//类似于01背包问题
class Solution {
public:
	/**
	*	正数数组中的最小不可组成和
	*	输入：正数数组arr
	*	返回：正数数组中的最小不可组成和
	*/
	int getFirstUnFormedNum(vector<int> arr, int len) {
		int max = arr[0];
		int min = arr[0];
		for (int i = 1; i < len; ++i)
		{
			max += arr[i];
			min = arr[i] < min ? arr[i] : min;
		}
		std::vector<int> dp(max + 1, 0);
		for (int i = 0; i < len; ++i)
		{
			for (int j = max; j >= arr[i]; --j)
			{
				if (dp[j] < dp[j - arr[i]] + arr[i])
					dp[j] = dp[j - arr[i]] + arr[i];
			}
		}
		for (int i = min; i <= max; ++i)
		{
			if (i != dp[i])
				return i;
		}
		return max + 1;
	}
};

int main()
{

	return 0;
}