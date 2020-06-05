#include <iostream>
#include <vector>

using namespace std;

//数组中出现次数超过数组长度一半的元素
int MaxSectionSum(const vector<int>& v)
{
	int ret = v[0];
	int count = 1;
	for (size_t i = 1; i < v.size(); ++i)
	{
		if (v[i] != v[i - 1])
		{
			--count;
		}
		else
			++count;
		if (count == 0)
		{
			ret = v[i];
			count = 1;
		}
	}

	count = 0;
	for (auto& i : v)
	{
		if (ret == i)
			++count;
	}

	return count > v.size() / 2 ? count : 0;
}

int main()
{


	system("pause");
	return 0;
}