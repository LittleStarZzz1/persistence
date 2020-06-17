#include <iostream>
#include <vector>

using namespace std;
//数组中出现次数超过一半的数字
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int count = 1;
		int tmp = numbers[0];
		for (size_t i = 1; i < numbers.size(); ++i)
		{
			if (tmp == numbers[i])
			{
				++count;
			}
			else
			{
				--count;
				if (count == 0)
				{
					++i;
					tmp = numbers[i];
					count = 1;
				}
			}
		}
		count = 0;
		for (auto& e : numbers)
		{
			if (tmp == e)
				++count;
		}

		return (count > (numbers.size() / 2)) ? tmp : 0;
	}
};

int main()
{

	return 0;
}