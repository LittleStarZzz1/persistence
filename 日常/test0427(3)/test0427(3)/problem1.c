#include <stdio.h>
#include <stdlib.h>
//������A�����ݺ�����B�����ݽ��н���(����һ����)
void PrintArray(int a[], int n){
	for (int i = 0; i < n; ++i){
		printf("%d ",a[i]);
	}
	putchar('\n');
}
int main1(){
	int a[5] = { 1, 3, 5, 7, 9 };
	int b[5] = { 2, 4, 6, 8, 10 };
	PrintArray(a, 5);
	PrintArray(b, 5);
	for (int i = 0; i < 5; ++i){
		int tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
	PrintArray(a, 5);
	PrintArray(b, 5);
	system("pause");
	return 0;
}