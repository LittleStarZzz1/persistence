#include <iostream>

//���üӼ��˳����ӷ�
class Solution {
public:
	int Add(int num1, int num2)
	{
		int sum = 0;
		int flag = 0;
		while (num2 != 0)
		{
			sum = num1 ^ num2;//�ڲ����ǽ�λ������µõ�������ӵĽ��
			flag = (num1 & num2) << 1;//���ǽ�λ������������Ϊ1���ʾ��Ҫ��ǰһλ��1���������1λ
			num1 = sum;
			num2 = flag;//���ǽ�λ
		}
		return num1;
	}
};

int main()
{

	return 0;
}