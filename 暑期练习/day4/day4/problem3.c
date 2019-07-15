#include <stdio.h>
#include <stdlib.h>

//写一个函数,求 unsigned int 型变量x在内存中二进制1的个数
int main3(){
	int num = 10;
	int count = 0;
	while (num != 0){
		if (num % 2 == 1){
			++count;
		}
		num = num >> 1;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}