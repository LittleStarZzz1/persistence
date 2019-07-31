#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//判断一个数n是否是2的k次方
//不用求k的值，只需判断即可
int JudgePow(int n){
	if (n < 1){
		return 0;
	}
	int m = n & (n - 1);
	return m == 0;
}
int main(){
	int n, k;
	printf("请输入一个整数n: \n");
	scanf("%d", &n);
	if (JudgePow(n)){
		printf("%d是2的k次方\n", n);
	}
	else {
		printf("%d不是是2的k次方\n", n);
	}
	system("pause");
	return 0;
}

