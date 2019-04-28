#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//判断0-99999之间的阿姆斯特朗数
int main2pp(){
	int n;
	int a[10] = { 0 };
	int i;
	int sum = 0;
	int count = 0;
	//由于不确定数的位数,所以找一个数组将每一位存起来,并且用count记下数字的位数
	for (n = 0; n < 100000; ++n){
		for (i = n; i; i /= 10){
			a[count] = i % 10;
			++count;
		}
		for (i = 0; i < count; ++i){
			sum += pow(a[i], count);
		}
		if (n == sum){
			printf("%d ", n);
		}
		count = sum = 0;	//强制将count与sum归0
	}
	system("pause");
	return 0;
}