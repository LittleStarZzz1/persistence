#include <iostream>
#include <vector>

using namespace std;

//����һ������nums��һ��ֵval,����Ҫԭ���Ƴ�������ֵ����val��Ԫ��,�����Ƴ���������³���
class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
#if 0
		int len = nums.size();
		//�п�,Ϊ��ֱ�ӷ���0
		if (len == 0)
		{
			return 0;
		}
		int i = 0;
		//������˫ָ�����
		for (int j = 0; j < len; ++j)
		{
			if (nums[j] != val)
			{
				nums[i] = nums[j];
				i++;
			}
		}
		//��ʱi==0˵��������ֻ��һ����������val���,ֱ�ӷ���0����
		if (i == 0)
		{
			return 0;
		}
		return i;
#else 1
		int len = nums.size();
		int i = 0;
		while (i < len)
		{
			if (nums[i] == val)
			{
				nums[i] = nums[len - 1];
				len--;
			}
			else
			{
				i++;
			}
		}
		return len;

#endif
	}
};

int main()
{


	system("pause");
	return 0;
}