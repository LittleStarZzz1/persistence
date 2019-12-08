#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//求连续子数组的最大和
int FindGreatestSumOfSubArray(vector<int> array) {
	int Max = array[0];
	int * f = new int[array.size() + 1];
	f[0] = array[0];

	for (int i = 1; i < array.size(); ++i)
	{
		f[i] = max(f[i - 1] + array[i], array[i]);
		Max = max(Max, f[i]);
	}
	delete[] f;
	return Max;
}

int main()
{



	system("pause");
	return 0;
}