#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//尝试着用条件运算符的嵌套来做
int main1p(){
	int score;
	char grade;
	printf("请输入学生的成绩(0-100): ");
	scanf("%d", &score);
	grade = score >= 90 ? 'a' : (score >= 60 ? 'b' : 'c');
	printf("成绩为%d的同学等级为%c\n", score, grade);
	system("pause");
	return 0;
}