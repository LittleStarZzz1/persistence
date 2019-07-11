#include <stdio.h>
#include <stdlib.h>

//一个球从100米的高度自由落下,每次落地后反弹回原高度的一半,再落下
//求它第10次落地时,共经过多少米?第10次反弹多高
int main3(){
	double sum = 0;
	double tall = 100;
	double tmp;
	double back;
	int n = 10;
	tmp = tall;
	while (n){
		sum += tmp;
		back = tall * 0.5;
		tall = back;
		tmp = back * 2;
		--n;
	}
	printf("第10次落地共经过%lf米,反弹高度为%lf米\n", sum, back);
	system("pause");
	return 0;
}