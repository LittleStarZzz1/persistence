#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�ݹ���n�Ľ׳�
int Factor(int n){
	if (n == 1){
		return 1;
	}
	return n*Factor(n - 1);
	
}
//�ǵݹ���n�Ľ׳�
int Factor_N(int n){
	int i;
	int ret = 1;
	for (i = 1; i <= n; ++i){
		ret *= i;
	}
	return ret;
}
int main(){
	int n;
	printf("������һ������n: \n");
	scanf("%d", &n);
	printf("�ݹ���:%d�Ľ׳�Ϊ%d\n", n, Factor(n));
	printf("�ǵݹ���:%d�Ľ׳�Ϊ%d\n", n, Factor_N(n));
	system("pause");
	return 0;
}