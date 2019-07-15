#include <stdio.h>
#include <stdlib.h>

int main1_5(){
	int i = 1;
	int sum = 0;
	while (i < 10){
		sum = sum + 1;
		i++;
	}
	printf("%d, %d\n", i, sum);
	system("pause");
	return 0;
}