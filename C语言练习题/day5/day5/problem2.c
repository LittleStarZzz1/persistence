#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//将一个正整数分解质因数,比如,输入90,打印出90 = 2 * 3 * 3 * 5
int main(){
	int n;
	printf("请输入一个正整数: ");
	scanf("%d", &n);
	printf("%d = ", n);
	for (int i = 2; i <= n; ++i){
		while (n != i){
			if (n % i == 0){
				printf("%d * ", i);
				n /= i;
			}
			else {
				break;
			}
		}
	}
	printf("%d\n", n);
	system("pause");
	return 0;
}