#include <stdio.h>
#include <stdlib.h>
//ʹ�ú���ʵ���������Ľ���
int Swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main2(){
	int num1 = 10;
	int num2 = 20;
	Swap(&num1, &num2);
	printf("%d %d", num1, num2);
	system("pause");
	return 0;
}