#include <stdio.h>
#include <stdlib.h>

//简化代码
int main2p(){
	int i;
	int j;
	int sum = 0;
	printf("1-1000之间的完全数有: ");
	for (i = 1; i <= 1000; ++i){
		for (j = 1; j < i; ++j){
			if (i % j == 0){
				sum += j;
			}
		}
		if (i == sum){
			printf("%d ", i);
		}
		sum = 0;	//切记sum要记得强制归0
	}
	printf("\n");
	system("pause");
	return 0;
}