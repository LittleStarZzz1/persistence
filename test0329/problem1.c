#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int j;
	int	tmp = 0;
	int sn;
	int sum = 0;
	printf("������һ��������һ����ʾ���Ƶ���: ");
	scanf("%d %d",&n,&sn);
	for (j = n; j; j /= sn){
		tmp = j % sn;
		sum = sum * sn + tmp;
	}
	if (sum == n){
		printf("%d��%d�������ǻ�����\n",n,sn);
	}
	else {
		printf("%d��%d�����²��ǻ�����",n,sn);
	}
	system("pause");
	return 0;
}