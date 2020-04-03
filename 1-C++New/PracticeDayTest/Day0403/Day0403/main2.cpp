#include <iostream>
#include <vector>

using namespace std;

//旋数组的最小值
class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		int len = rotateArray.size();
		if (len == 0)
			return 0;
		for (int i = 0; i < len - 1; ++i)
		{
			if (rotateArray[i + 1]< rotateArray[i])
			{
				return rotateArray[i + 1];
			}
		}
	}
};

int main()
{


	system("pause");
	return 0;
}