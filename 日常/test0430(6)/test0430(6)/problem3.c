#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int JudgeYear(int n){
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0){
		return 1;
	}
	return 0;
}
int main3(){
	int n;
	printf("������һ�����: ");
	scanf("%d",&n);
	if (JudgeYear(n)){
		printf("%d������\n",n);
	}
	else {
		printf("%d����������\n", n);
	}
	system("pause");
	return 0;
}
