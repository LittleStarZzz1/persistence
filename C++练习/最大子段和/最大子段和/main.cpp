#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#if 0
int FindGreatestSumOfSubArray(vector<int> array) {
	//vector<int> tmp(array.size(), 0);
	int tmp = array[0];
	int maxpre = array[0];

	int i;
	for (i = 1; i < array.size(); ++i)
	{
		if (maxpre >= 0)
		{
			maxpre += array[i];
		}
		else
		{
			maxpre = array[i];
		}
		if (tmp < maxpre)
		{
			tmp = maxpre;
		}
	}
	return tmp;
}
#else 1

int dealGreatestSum(vector<int> & array, int begin, int end)
{
	if (begin == end)
	{
		return array[begin];
	}

	int mid = (begin + end) / 2;

	int leftmax = dealGreatestSum(array, begin, mid);
	int rightmax = dealGreatestSum(array, mid + 1, end);

	int crossmax = 0;

	int i;
	int sum = 0;
	int tmpmax = array[mid];

	for (i = mid; i >= begin; --i)
	{
		sum += array[i];
		if (sum > tmpmax)
		{
			tmpmax = sum;
		}
	}
	crossmax += tmpmax;

	sum = 0;
	tmpmax = array[mid + 1];
	for (i = mid + 1; i <= end; ++i)
	{
		sum += array[i];
		if (sum > tmpmax)
		{
			tmpmax = sum;
		}
	}
	crossmax += tmpmax;
	return max(max(leftmax, rightmax), crossmax);
}

int FindGreatestSumOfSubArray(vector<int> array)
{
	return dealGreatestSum(array, 0, array.size() - 1);
}
	
#endif
int main()
{
	int data[] = { 6, -3, -2, 7, -15, 1, 2, 2 };
	vector<int> v(data, data + 8);

	cout << FindGreatestSumOfSubArray(v) << endl;

	system("pause");
	return 0;
}