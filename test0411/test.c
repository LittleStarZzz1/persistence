#include <stdio.h>
#include <stdlib.h>
//Init������ʼ������
void Init(int data[],int a[],int size){
	for (int i = 0; i < size; ++i){
		a[i] = data[i];
	}
}
//empty�����������
void empty(int a[], int size){
	for (int i = 0; i < size; ++i){
		a[i] = 0;
	}
}
//ʵ��reverse�����������Ԫ������
void reverse(int a[], int size){
	int i, j;
	int tmp;
	for (i = 0, j = size - 1; i < j; ++i, --j){
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
void PrintArray(int a[], int size){
	for (int i = 0; i < size; ++i){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	int data[10] = { 1, 9, 5, 2, 7, 4, 3, 0, 8, 6 };
	int a[10] = { 0 };
	Init(data, a, 10);
	PrintArray(a, 10);
	reverse(a, 10);
	PrintArray(a, 10);
	empty(a, 10);
	PrintArray(a, 10);
	system("pause");
	return 0;
}