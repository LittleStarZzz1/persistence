#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��S = a + aa + aaa + aaaa + a...a��ֵ
//����a��һ������,����2 + 22 + 222 + 2222 + 22222(��ʱ��5�������)
//����������ɼ��̿���
int main1(){
	int a, n;
	int sum = 0;
	int tmp = 0;
	printf("������һ������a��ʾ����,����n��ʾλ��: ");
	scanf("%d %d", &a, &n);
	while (n){
		tmp = tmp * 10 + a;
		sum += tmp;
		n = n - 1;
	}
	printf("����õ�����֮��Ϊ:%d\n", sum);
	system("pause");
	return 0;
}