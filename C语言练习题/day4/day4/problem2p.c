#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//������,����㷨Ч��
int main2p(){
	int i, j;
	int leap = 1;
	for (i = 101; i <= 200; ++i){
		for (j = 2; j <= sqrt(i); ++j){
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