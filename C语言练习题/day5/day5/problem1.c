#include <stdio.h>
#include <stdlib.h>

//��ӡ��100-999֮�����е�ˮ�ɻ���
int main1(){
	int i;
	int a, b, c;
	for (i = 100; i < 1000; ++i){
		a = i % 10;	//a��ʾi�ĸ�λ�ϵ�����
		b = i / 10 % 10;	//b��ʾi��ʮλ�ϵ�����;
		c = i / 100;
		if (a * a * a + b * b * b + c * c * c == i){
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}