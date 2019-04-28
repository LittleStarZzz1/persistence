#include <stdio.h>
#include <stdlib.h>
//求出100-999之间的水仙花数并输出,水仙花数是指一个三位数,其各位数字的立方和恰好等于该数本身.
//数论中,水仙花数也称自恋数,自幂数,阿姆斯特朗数,是指一个n位数,其各位数字n次方之和等于该数
int main2(){
	int n;
	int a, b, c;
	int sum;
	for (n = 100; n < 1000; ++n){
		a = n / 100;
		b = n / 10 % 10;
		c = n % 10;
		sum = a * a * a + b * b * b + c * c * c;
		if (n == sum){
			printf("%d ", n);
		}
	}
	system("pause");
	return 0;
}