#include <stdio.h>
#include <stdlib.h>
//���Ͼ��� 
//��һ����ά����, �����ÿ�д������ǵ�����, ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ����
int FindNum(int a[][3], int x, int y, int f){
	int i = 0;
	int j = y - 1;
	while (i < x && j >= 0){
		if (a[i][j] > f){
			--j;
		}
		else if (a[i][j] < f){
			++i;
		}
		else {
			return 1;
		}
	}
	return 0;
}
int main(){
	int a[][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };
	if (FindNum(a, 3, 3, 5)){
		printf("�ҵ���!\n");
	}
	else {
		printf("û�ҵ�!\n");
	}
	system("pause");
	return 0;
}