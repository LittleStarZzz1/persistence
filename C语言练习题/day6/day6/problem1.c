#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//ѧϰ�ɼ�>=90�ֵ�ͬѧ��a��ʾ
//ѧϰ�ɼ���60-89֮���ͬѧ��b��ʾ
//60��������c��ʾ
int main1(){
	int score;
	char grade;
	printf("������ѧ���ĳɼ�(0-100): ");
	scanf("%d", &score);
	if (score >= 90 && score <= 100){
		grade = 'a';
	}
	else if (score < 90 && score >= 60){
		grade = 'b';
	}
	else if (score >= 0 && score < 60){
		grade = 'c';
	}
	else {
		printf("������������!\n");
	}
	printf("�ɼ�Ϊ%d��ͬѧ�ȼ�Ϊ%c\n", score, grade);
	system("pause");
	return 0;
}