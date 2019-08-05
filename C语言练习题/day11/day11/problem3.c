#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//判断100以内的素数
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