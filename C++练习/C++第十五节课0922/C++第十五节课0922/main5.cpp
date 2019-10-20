#include <iostream>
#include <vector>

using namespace std;

// ������ֻ��һ����������һ��,ʣ�µ���������������

int _singleNumber(vector<int> & nums)
{
	//int sum = 0, tmp = 0;

	//for (auto & i : nums)
	//{
	//	sum = (sum ^ i) & ~tmp;
	//	tmp = (tmp ^ i) & ~sum;
	//}

	int sum = 0, count = 0;

	int i;
	for (i = 0; i < 32; ++i)
	{
		for (auto j : nums)
		{
			count += j >> i & 1;
		}
		if (count % 3)
		{
			sum |= 1u << i;
		}
		count = 0;
	}

	return sum;


}


int main()
{
	int nums[10] = { 2, 2, 3, 8, 5, 2, 3, 5, 5, 3 };
	vector<int> v;
	v.insert(v.begin(), nums, nums + 10);

	cout << _singleNumber(v) << endl;


	system("pause");
	return 0;
}