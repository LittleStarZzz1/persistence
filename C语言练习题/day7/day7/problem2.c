#include <stdio.h>
#include <stdlib.h>

//一个数如果恰好等于它的因子之和,这个数就称为"完数".
//例如6 = 1 + 2 + 3.
//找出1000以内的所有完数
int main2(){
	int i;
	int j;
	int sum = 0;
	int count = 0;
	int a[20] = { 0 };
	printf("1-1000之间的完全数有: ");
	for (i = 1; i <= 1000; ++i){
		for (j = 1; j < i; ++j){
			if (i % j == 0){
				a[count] = j;
				++count;
			}
		}
		for (j = 0; j < count; ++j){
			sum += a[j];
		}
		if (i == sum){
			printf("%d ", i);
		}
		sum = 0;
		count = 0;	//切结sum和count要记得强制归0
	}
	printf("\n");
	system("pause");
	return 0;
}