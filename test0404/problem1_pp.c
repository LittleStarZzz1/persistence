#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Fib(int n){
	int num1 = 1;	//��һ����Ϊ1
	int num2 = 1;	//�ڶ�����Ϊ1
	int sum;
	while (n > 2){
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		--n;
	}
	return 1;
}
int main(){
	int n;
	printf("������һ������: \n");
	scanf("%d",&n);
	printf("��%d��쳲���������%d\n",n,Fib(n));
	system("pause");
	return 0;
}