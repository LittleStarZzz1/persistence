#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//���n��쳲�������(�ǵݹ�)
int FibN(int n){
	if (n <= 2){
		return 1;
	}
	int an_1 = 1;
	int an_2 = 1;
	int an;
	while (n > 2){
		an = an_2 + an_1;
		an_2 = an_1;
		an_1 = an;
		--n;
	}
	return an;
}
int main(){
	int n;
	printf("������һ������n: ");
	scanf("%d", &n);
	printf("��%d��쳲���������:%d\n", n, FibN(n));
	system("pause");
	return 0;
}