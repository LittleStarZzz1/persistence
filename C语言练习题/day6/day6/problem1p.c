#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�������������������Ƕ������
int main1p(){
	int score;
	char grade;
	printf("������ѧ���ĳɼ�(0-100): ");
	scanf("%d", &score);
	grade = score >= 90 ? 'a' : (score >= 60 ? 'b' : 'c');
	printf("�ɼ�Ϊ%d��ͬѧ�ȼ�Ϊ%c\n", score, grade);
	system("pause");
	return 0;
}