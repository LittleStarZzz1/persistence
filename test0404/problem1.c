#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Fib(int n){
	if (n <= 2){
		return 1;
	}
	else {
		return Fib(n - 2) + Fib(n - 1);
	}
}
int main(){
	//���n��쳲�������
	int n;
	printf("������һ������: \n");
	scanf("%d",&n);
	printf("��%d��쳲���������%d\n",n,Fib(n));
	system("pause");
	return 0;
}