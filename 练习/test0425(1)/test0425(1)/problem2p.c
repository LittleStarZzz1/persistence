#include <stdio.h>
#include <stdlib.h>
//���庯��,ͨ�����ú�����ӡn�׳˷���
void Factor(int n){
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= i; ++j){
			printf("%d*%d=%2d ", j, i, i*j);
		}
		printf("\n");
	}
}
int main_2(){
	Factor(9);
	system("pause");
	return 0;
}