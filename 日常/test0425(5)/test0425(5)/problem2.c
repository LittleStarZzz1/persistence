#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//编写代码模拟三次密码输入的场景.多能输入三次密码
//密码正确,提示“登录成功”,密码错误.
//可以重新输入,最多输入三次.三次均错,则提示退出程序.
int main(){
	char pwd[20] = { 0 };
	int i;
	for (i = 0; i < 3; ++i){
		printf("请输入您的密码: ");
		scanf("%s", &pwd);
		if (strcmp(pwd, "huanyin") == 0){
			break;
		}
		printf("您输入的密码错误!\n");
	}
	if (i == 3){
		printf("登录失败!\n");
	}
	else {
		printf("登录成功!\n");
	}
	system("pause");
	return 0;
}