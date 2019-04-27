#include <stdio.h>
#include <stdlib.h>
//¼ÆËã1/1-1/2+1/3-1/4+1/5¡­¡­+1/99 -1/100µÄÖµ¡£
int main2(){
	int i;
	int flag = 1;
	double tmp, sum = 0;
	for (i = 1; i < 100; ++i){
		tmp = 1.0 / i * flag;
		sum += tmp;
		flag = flag * (-1);
	}
	printf("%lf\n",sum);
	system("pause");
	return 0;
}