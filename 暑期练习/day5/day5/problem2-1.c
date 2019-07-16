#include <stdio.h>
#include <stdlib.h>

int fun(int x){
	int count = 0;
	while (x){
		count++;
		x = x & (x - 1);
	}
	return count;
}
int main2_1(){
	printf("fun(2017) = %d\n", fun(2019));
	system("pause");
	return 0;
}