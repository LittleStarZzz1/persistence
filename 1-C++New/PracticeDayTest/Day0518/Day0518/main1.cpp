#include <iostream>
#include <vector>

using namespace std;

//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int ret = 0;
		for (auto i : nums)
		{
			ret ^= i;
		}
		return ret;
	}
};

int main()
{

	system("pause");
	return 0;
}