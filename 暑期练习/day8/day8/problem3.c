#include <stdio.h>
#include <stdlib.h>

//��д������������Ԫ�س��ִ����������鳤��һ�������
//����{ 1, 2, 3, 2, 2, 2, 5, 5, 2 },2Ϊ�������鳤��һ�������
int main3(){
	int a[] = { 1, 2, 3, 2, 2, 2, 5, 5, 2 };
	int n = sizeof(a) / sizeof(a[0]);
	int size = n / 2;
	int i, j;
	int count = 0;
	for (i = 0; i < n; ++i){
		for (j = 0; j < n; ++j){
			if (a[i] == a[j]){
				++count;
			}
		}
		if (count > size){
			printf("%d\n", a[i]);
		}
		count = 0;
	}
	system("pause");
	return 0;
}