#include <stdio.h>
#include <stdlib.h>
#define N 3

//��һ��N*N����Խ���Ԫ��֮��
int main2(){
	int a[N][N];
	int i, j;
	int sum = 0;
	for (i = 0; i < N; ++i){
		for (j = 0; j < N; ++j){
			scanf("%d", &a[i][j]);
		}
		sum += a[i][i];
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}