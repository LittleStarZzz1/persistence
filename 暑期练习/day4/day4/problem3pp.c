#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 10;
	int count = 0;
	while (num != 0){
		++count;
		num = num & (num - 1);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}