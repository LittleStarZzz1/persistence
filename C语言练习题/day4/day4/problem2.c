#include <stdio.h>
#include <stdlib.h>

//�ж�101-200֮���ж�������,��������������
int main2(){
	int i;
	int j;
	int leap = 1;
	for (i = 101; i <= 200; ++i){
		for (j = 2; j < i; ++j){
			if (i % j == 0){
				leap = 0;
				break;
			}
		}
		if (leap){
			printf("%d ", i);
		}
		leap = 1;
	}
	printf("\n");
	system("pause");
	return 0;
}