#include <stdio.h>
#include <stdlib.h>
//�ݹ�ʵ����n�Ľ׳� 
int Factor(int n){
	if (n == 1){
		return 1;
	}
	return n * Factor(n - 1);
}
//�ǵݹ�ʵ����n�Ľ׳�
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