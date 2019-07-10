#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//学习成绩>=90分的同学用a表示
//学习成绩在60-89之间的同学用b表示
//60分以下用c表示
int main1(){
	int score;
	char grade;
	printf("请输入学生的成绩(0-100): ");
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
		printf("您的输入有误!\n");
	}
	printf("成绩为%d的同学等级为%c\n", score, grade);
	system("pause");
	return 0;
}