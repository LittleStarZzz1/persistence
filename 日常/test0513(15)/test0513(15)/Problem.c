#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//����ˮ,1ƿ��ˮ1Ԫ,2����ƿ���Ի�һƿ��ˮ
//��20Ԫ,���Զ�����ˮ
int main1(){
	int money;
	int empty;
	int count;
	printf("�������ֽ���Ŀ: ");
	scanf("%d", &money);
	empty = money;
	count = money;
	while (empty >= 2){
		count = count + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("���Ժ�%dƿ��ˮ!\n", count);
	system("pause");
	return 0;
}