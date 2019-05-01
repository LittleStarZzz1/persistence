#include <stdio.h>
#include <stdlib.h>
//递归实现求n的阶乘 
int Factor(int n){
	if (n == 1){
		return 1;
	}
	return n * Factor(n - 1);
}
//非递归实现求n的阶乘
int Factor_N(int n){
	int result = 1;
	for (int i = n; i >= 1; --i){
		result *= i;
	}
	return result;
}
int main6(){
	printf("%d\n", Factor(6));
	printf("%d\n", Factor_N(6));
	system("pause");
	return 0;
}