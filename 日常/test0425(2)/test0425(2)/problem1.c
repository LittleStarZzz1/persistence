#include <stdio.h>
#include <stdlib.h>
//���庯��������������������
void Swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main1(){
	//�����������ͱ�����ֵ,������ֵ�����ݽ���
	/*int tmp;
	int a = 10, b = 20;
	tmp = a;
	a = b;
	b = tmp;
	printf("%d %d",a, b);*/
	//��������ʱ����,����������������
	/*int a = 10, b = 20;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d",a,b);*/
	int a = 10, b = 20;
	Swap(&a,&b);
	printf("%d %d",a,b);
	system("pause");
	return 0;
}