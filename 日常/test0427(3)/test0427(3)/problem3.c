#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int count = 0;
	int Count = 0;
	//1-100所有整数中出现9的次数
	for (i = 1; i <= 100; ++i){
		if (i % 10 == 9){
			++count;
		}
		if (i / 10 == 9){
			++count;
		}
	}
	//1-1000所有整数中出现9的次数
	for (i = 1; i < 1000; ++i){
		if (i % 10 == 9){
			++Count;
		}
		if (i / 100 == 9){
			++Count;
		}
		if (i / 10 % 10 == 9){
			++Count;
		}
	}
	printf("%d\n",count);
	printf("%d\n",Count);
	system("pause");
	return 0;
}