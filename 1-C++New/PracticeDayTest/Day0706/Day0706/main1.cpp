#include <iostream>
#include <vector>

using namespace std;

//�������������С������ɺ�
//��̬�滮
//������01��������
class Solution {
public:
	/**
	*	���������е���С������ɺ�
	*	���룺��������arr
	*	���أ����������е���С������ɺ�
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