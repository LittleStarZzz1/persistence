#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��һ������,�ӳ��������������ÿ���¶���һ������,С���ӳ����������º�
//ÿ��������һ��С����,�������Ӳ�������,��ÿ���µ���������Ϊ����
//����һ�ݹ�����������
int FibNum(int n){
	if (n <= 2){
		return 1;
	}
	return FibNum(n - 1) + FibNum(n - 2);
}
//���ֹ�ģ�ϴ�ʱ,�ݹ����Ứ�ѽϳ���ʱ��
//�������ǵݹ����
int NFibNum(int n){
	int an_1 = 1;
	int an_2 = 1;
	int an;
	if (n <= 2){
		return 1;
	}
	while (n > 2){
		an = an_2 + an_1;
		an_2 = an_1;
		an_1 = an;
		--n;
	}
	return an;

}
int main1(){
	int month;
	printf("�������·�: ");
	scanf("%d", &month);
	printf("���õݹ����õ���%d���µ���������Ϊ%d\n", month, 2 * FibNum(month));
	printf("���÷ǵݹ����õ���%d���µ���������Ϊ%d\n", month, 2 * NFibNum(month));
	system("pause");
	return 0;
}