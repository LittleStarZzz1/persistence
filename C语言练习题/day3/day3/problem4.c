#include <stdio.h>
#include <stdlib.h>

//��ӡ9*9�˷��ھ���
int main(){
	int i, j;
	for (i = 1; i < 10; ++i){
		for (j = 1; j <= i; ++j){
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

