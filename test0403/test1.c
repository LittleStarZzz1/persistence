#include <stdio.h>
#include <stdlib.h>

void Swap(int* a, int* b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main_2(){
	int num1 = 10;
	int num2 = 20;
	Swap(&num1, &num2);
	printf("num1 = %d,nmu2 = %d", num1, num2);
	system("pause");
	return 0;
}