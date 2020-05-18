#include <iostream>
#include <vector>

using namespace std;

//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ����������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int arr[32] = { 0 };
		for (auto e : nums)
		{
			for (size_t i = 0; i < 32; ++i)
			{
				if (e & (1 << i))
				{
					arr[i]++;
				}
			}
		}

		int n = 0;
		for (size_t i = 0; i < 32; ++i)
		{
			if (arr[i] % 3 == 1)
			{
				n |= (1 << i);
			}
		}
		return n;
	}
};

int main()
{

	system("pause");
	return 0;
}