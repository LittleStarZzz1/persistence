#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//��дһ������ʵ��n^k,ʹ�õݹ�ʵ��
int PowFunction(int n, int k){
	if (k == 0){
		return 1;
	}
	if (k == 1){
		return n;
	}
	return n * PowFunction(n, k - 1);
}
int main2(){
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", PowFunction(n, k));
	system("pause");
	return 0;
}