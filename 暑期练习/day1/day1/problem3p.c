#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��һ����ά������,ÿһ�ж����մ����ҵ�����˳������
//ÿһ�ж����մ��ϵ��µ�����˳������
//���һ������,����������һ����ά�����һ������,�жϸ��������Ƿ��и�����
//���ù��ܷ���һ����������
int FindNum(int (*arr)[4], int to_find){
	int row = 3;
	int col = 0;
	while (row >= 0 && col <= 3){
		if (to_find > arr[row][col]){
			++col;
		}
		else if (to_find < arr[row][col]){
			--row;
		}
		else {
			return 1;
		}
	}
	return 0;
}
int main(){
	int arr[4][4] = { 1, 2, 8, 9,
		2, 4, 9, 12,
		4, 7, 10, 13,
		6, 8, 11, 15 };
	int n;
	printf("����������Ҫ���ҵ���: ");
	scanf("%d", &n);
	if (FindNum(arr, n)){
		printf("�ҵ���!\n");
	}
	else {
		printf("û�ҵ�!\n");
	}
	system("pause");
	return 0;
}