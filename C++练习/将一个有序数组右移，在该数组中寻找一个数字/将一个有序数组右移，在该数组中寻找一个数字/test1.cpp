#include <iostream>
#include <vector>

using namespace std;

//将一个有序数组按顺序移动，在移动后的数组中查找一个数字
//比如原有序数组为[ 1, 2, 3, 4, 5, 6, 7, 8, 9 ]
//左移三次后变为[ 4, 5, 6, 7, 8, 9, 1, 2, 3 ]

int findBreakPoints(const vector<int> & src){
	int left = 0;
	int right = src.size() - 1;
	int mid;

	while (left <= right)
	{
		mid = (left + right) / 2;
		
		if (src[mid] > src[mid + 1])
		{
			return mid + 1;
		}

		else if (src[left] > src[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return 0;
}

int findNumber(const vector<int> & src, int bp, int to_find)
{
	int left = bp;
	int size = src.size();
	int right = bp + size - 1;
	int mid;

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (src[mid % size] > to_find)
		{
			right = mid - 1;
		}

		else if (src[mid % size] < to_find)
		{
			left = mid + 1;
		}

		else
		{
			return mid % size;
		}
	}
	return 0;
}

int main()
{
	vector<int> src{ 4, 5, 6, 7, 8, 9, 1, 2, 3 };

	int bp = findBreakPoints(src);

	cout << findNumber(src, bp, 6) << endl;

	system("pause");
	return 0;
}