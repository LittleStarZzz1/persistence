#include <iostream>
#include <vector>

class Solution {
public:
	/**
	*  ����λ�϶�����������ż��λ�϶���ż��
	*  ���룺����arr�����ȴ���2
	*  len��arr�ĳ���
	*  ��arr����������λ�϶�����������ż��λ�϶���ż��
	*/
	void oddInOddEvenInEven(std::vector<int>& arr, int len) {
		int i = 0;
		int j = 1;
		while (i < len && j < len)
		{
			if (arr[len - 1] % 2 == 0)
			{
				std::swap(arr[len - 1], arr[i]);
				i += 2;
			}
			else
			{
				std::swap(arr[len - 1], arr[j]);
				j += 2;
			}
		}
	}
};

int main1()
{

	return 0;
}