#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int JudgeNum(int n){
	int tmp = sqrt(n);
	for (int i = 2; i <= tmp; ++i){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	printf("������һ������: ");
	scanf("%d",&n);
	if (n == 1){
		printf("%d�Ȳ�������Ҳ���Ǻ���\n",n);
	}
	else if (JudgeNum(n)){
		printf("%d������\n",n);
	}
	else {
		printf("%d�Ǻ���\n",n);
	}
	system("pause");
	return 0;
}