#include <stdio.h>
#include <stdlib.h>

//��һ��������5λ��������
//������Ǽ�λ��
//�����ӡ��λ����
void PrintNumber(int n){	//�ݹ�ʵ�������ӡ
	printf("%d ", n % 10);
	if (n > 10){
		PrintNumber(n / 10);
	}
}
int Num(int n){
	int count = 0;
	while (n){
		++count;
		n = n / 10;
	}
	return count;
}
int main2(){
	printf("�����ӡ��");
	PrintNumber(12345);
	putchar('\n');
	printf("����λ����%d\n", Num(12345));
	system("pause");
	return 0;
}