#include <stdio.h>
#include <stdlib.h>

//��5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ
//�ʵ�4������������˵�ȵ�3���˴�2�ꡣ
//�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ���
//�ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
int CalAge(int n){
	if (n == 1){
		return 10;
	}
	return CalAge(n - 1) + 2;
}
int main1(){
	printf("%d\n", CalAge(5));
	system("pause");
	return 0;
}