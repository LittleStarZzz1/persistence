#include <stdio.h>
#include <stdlib.h>

//�򻯴���
int main2p(){
	int i;
	int j;
	int sum = 0;
	printf("1-1000֮�����ȫ����: ");
	for (i = 1; i <= 1000; ++i){
		for (j = 1; j < i; ++j){
			if (i % j == 0){
				sum += j;
			}
		}
		if (i == sum){
			printf("%d ", i);
		}
		sum = 0;	//�м�sumҪ�ǵ�ǿ�ƹ�0
	}
	printf("\n");
	system("pause");
	return 0;
}