#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//�����г��ִ�������һ�������
class Solution {
public:
#if 0
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.size() == 1)
			return numbers[0];//��ֹ������ֻ��һ������ʱ���������
		sort(numbers.begin(), numbers.end());//����
		int len = numbers.size();
		int n = 1;
		for (int i = 0; i < len - 2; ++i)
		{
			if (numbers[i + 1] == numbers[i])//��n������,���ֳ������ۼ�
			{
				++n;
				if (n > len / 2)//���ִ����������鳤��һ��
					return numbers[i];
			}
			else
				n = 1;//ǰһ���������ں�һ����Ҫ����n,�������֮ǰ�Ľ���ۼ�
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