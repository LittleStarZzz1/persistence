#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��һ����ά������,ÿһ�ж����մ����ҵ�����˳������
//ÿһ�ж����մ��ϵ��µ�����˳������
//���һ������,����������һ����ά�����һ������,�жϸ��������Ƿ��и�����
int main3(){
	int arr[4][4] = { 1, 2, 8, 9,
					  2, 4, 9, 12,
					  4, 7, 10, 13,
					  6, 8, 11, 15 };
	int n;
	int row = 3;
	int col = 0;
	int leap = 1;
	printf("����������Ҫ���ҵ���: ");
	scanf("%d", &n);
	while (row >= 0 && col <= 3){
		if (n > arr[row][col]){
			++col;
		}
		else if(n < arr[row][col]){
			--row;
		}
		else {
			printf("�ҵ���!\n");
			leap = 0;
			break;
		}
	}
	if (leap){
		printf("û�ҵ�!\n");
	}
	system("pause");
	return 0;
}