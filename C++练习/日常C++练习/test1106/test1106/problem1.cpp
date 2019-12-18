#include <iostream>
#include <vector>

using namespace std;

//C++中找出数组中只出现一次的数字
int singleNum(vector<int> & v)
{
	int ret = 0;
	for (auto & i : v)
	{
		ret ^= i;
	}
	return ret;
}


int main1()
{
	int nums[11] = { 1, 5, 6, 3, 5, 2, 1, 8, 6, 3, 8 };

	vector<int> v;
	v.insert(v.begin(), nums, nums + 11);

	cout << singleNum(v) << endl;



	system("pause");
	return 0;
}