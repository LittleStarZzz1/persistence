#include <stdio.h>
#include <stdlib.h>
int main1(){
	int a[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int j = 8;
	int tmp;
	while (1){
		while (a[i] % 2){
			++i;
		}
		while (a[j] % 2 == 0){
			--j;
		}
		if (i > j){
			break;
		}
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
	//��һ��д��(����д�������ȫ������ȫż�������Խ��)
	/*
	while (1){
	while (a[i++] % 2);
	while (a[j--] % 2 == 0);
	if (i > j){
	break;
	}
	tmp = a[i - 1];
	a[i - 1] = a[j + 1];
	a[j + 1] = tmp;
	}
	//�޸�Ϊ
	while (1){
	while (a[i++] % 2 && i <= 8);
	while (a[j--] % 2 == 0 && j >= 0);
	if (i > j){
	break;
	}
	tmp = a[i - 1];
	a[i - 1] = a[j + 1];
	a[j + 1] = tmp;
	}
	*/
	for (i = 0; i < 9; ++i){
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}