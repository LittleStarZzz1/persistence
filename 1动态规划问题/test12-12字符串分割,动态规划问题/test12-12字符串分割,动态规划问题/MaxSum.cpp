#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//求解最大子段和
class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		int Max = array[0];
		int Maxsum = array[0];
		int * f = new int;
		f[0] = array[0];
		for (int i = 1; i < array.size(); ++i)
		{
			f[i] = max(f[i - 1] + array[i], array[i]);
			Maxsum = max(Maxsum, f[i]);
		}
		delete f;
		return Maxsum;
	}
};

int main()
{


	system("pause");
	return 0;
}