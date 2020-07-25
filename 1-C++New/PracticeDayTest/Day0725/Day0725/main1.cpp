#include <iostream>
#include <vector>

using namespace std;

//贪心问题,贪最大值
//左右最值最大值
class MaxGap {
public:
	int findMaxGap(vector<int> A, int n) {
		// write code here
		int max = A[0];
		//由于取的两边数组的最大值,而数组又是一个往外扩的过程(数组元素个数增多)
		//因此在往外扩的过程中,若加进来一个比边界值大的数,数组中最大元素发生变化,导致最终差值变小
		//反之,进来一个比边界值小的数,数组中最大元素不发生变化,差值不变
		//所以取两边之中较小的一个元素
		int min = A[0] > A[n - 1] ? A[n - 1] : A[0];

		for (int i = 1; i < n; ++i)
		{
			if (A[i] > max)
				max = A[i];//找到数组中最大值
			//无论数组怎么变化,最终找到的一边的最大值一定为数组中最大值
		}

		return max - min;
	}
};

int main()
{


	return 0;
}