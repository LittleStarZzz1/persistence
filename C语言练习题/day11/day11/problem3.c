#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//�ж�100���ڵ�����
int main(){
	int i;
	int j;
	int leap = 1;
#if 1
	for (i = 2; i <= 100; ++i){
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
	putchar('\n');
#else
	for (i = 2; i <= 100; ++i){
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
	putchar('\n');
#endif
	system("pause");
	return 0;
}