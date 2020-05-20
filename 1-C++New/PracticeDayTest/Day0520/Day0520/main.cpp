#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//数组中出现次数超过一半的数字
class Solution {
public:
#if 0
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.size() == 1)
			return numbers[0];//防止数组中只有一个数字时的特殊情况
		sort(numbers.begin(), numbers.end());//排序
		int len = numbers.size();
		int n = 1;
		for (int i = 0; i < len - 2; ++i)
		{
			if (numbers[i + 1] == numbers[i])//用n来计数,数字出现则累加
			{
				++n;
				if (n > len / 2)//出现次数超过数组长度一半
					return numbers[i];
			}
			else
				n = 1;//前一个数不等于后一个数要重置n,否则会在之前的结果累加
		}
		return 0;
	}
#elif 1
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int ret = numbers[0];
		int n = 1;

		for (size_t i = 1; i < numbers.size(); ++i)
		{
			if (numbers[i] == ret)
			{
				++n;
			}
			else
			{
				--n;
				if (n == 0)
				{
					ret = numbers[i];
					n = 1;
				}
			}
		}
		n = 0;
		for (auto e : numbers)
		{
			if (e == ret)
				++n;
		}
		return n > numbers.size() / 2 ? ret : 0;
	}

#endif
};

int main()
{


	system("pause");
	return 0;
}