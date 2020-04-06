#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		int n = rotateArray.size();
		if (n == 0)
			return 0;
		int left = 0, right = n - 1;

		while (left < right)
		{
			if (rotateArray[left] < rotateArray[right])
				return rotateArray[left];
			int mid = (left + right) >> 2;
			if (rotateArray[left] < rotateArray[mid])
				left = mid + 1;
			else if (rotateArray[right] > rotateArray[mid])
				right = mid;//防止mid处于递增序列部分的第一个值
			else
				left++;
		}
		return rotateArray[left];
	}
};

int main()
{

	system("pause");
	return 0;
}