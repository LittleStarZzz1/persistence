#include <stdio.h>
#include <stdlib.h>
//����һ������ 
//ʵ�ֺ���init()��ʼ������
//empty()�������	
//ʵ��reverse()�����������Ԫ�ص�����
void Init(int data[], int a[], int size){
	for (int i = 0; i < size; ++i){
		a[i] = data[i];
	}
}
void empty(int a[], int size){
	for (int i = 0; i < size; ++i){
		a[i] = 0;
	}
}
void reverse(int a[], int size){
	int i, j;
	for (i = 0, j = size - 1; i < j; ++i, --j){
		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
void PrintArray(int a[], int size){
	for (int i = 0; i < size; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main4(){
	int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a[] = { 0 };
	int size = sizeof(data) / sizeof(data[0]);
	Init(data, a, size);
	PrintArray(a, size);
	reverse(a, size);
	PrintArray(a, size);
	empty(a, size);
	PrintArray(a, size);
	system("pause");
	return 0;
}