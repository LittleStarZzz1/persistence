#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//�ж�һ����n�Ƿ���2��k�η�
//������k��ֵ��ֻ���жϼ���
int JudgePow(int n){
	if (n < 1){
		return 0;
	}
	int m = n & (n - 1);
	return m == 0;
}
int main(){
	int n, k;
	printf("������һ������n: \n");
	scanf("%d", &n);
	if (JudgePow(n)){
		printf("%d��2��k�η�\n", n);
	}
	else {
		printf("%d������2��k�η�\n", n);
	}
	system("pause");
	return 0;
}

