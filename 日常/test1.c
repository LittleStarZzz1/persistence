#include <stdio.h>
#include <stdlib.h>
unsigned int reverseNum(unsigned int n){
	unsigned int sum = 0;;
	for (int i = 0; i < 32; ++i, n /= 2){
		unsigned int tmp = n % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}
int main(){
	printf("%u\n",reverseNum(25));
	system("pause");
	return 0;
}