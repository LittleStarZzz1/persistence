#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int minArray(vector<int>& numbers) {
		int size = numbers.size();
		int left = 0, right = size - 1;
		int mid;
		while (left < right)
		{
			mid = (left + right) >> 1;
			if (numbers[mid] > numbers[right])
				left = mid + 1;
			else if (numbers[mid] < numbers[right])
				right = mid;
			else
				right--;
		}
		return numbers[left];
	}
};

int main()
{


	system("pause");
	return 0;
}