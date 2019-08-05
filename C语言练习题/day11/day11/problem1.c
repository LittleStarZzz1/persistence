#include <stdio.h>
#include <stdlib.h>

//请输入星期的第一个字母来判断以下是星期几
//如果第一个字母一样,则继续判断第二个字母
int JudgeWeek(){
	char c;
	char d;
	printf("请输入一个字母: ");
	scanf("%c", &c);
	switch (c){
	case 'm':
		return 1;
	case 't':
		while (1){
			printf("因首字母相同,请输入下一个字母!\n");
			d = getch();
			if (d == 'u'){
				return 2;
			}
			else if (d == 'h'){
				return 4;
			}
			else {
				printf("您的输入有误，请重新输入!\n");
			}
		}
	case 'w':
		return 3;
	case 'f':
		return 5;
	case 's':
		while (1){
			printf("因首字母相同,请输入下一个字母!\n");
			d = getch();
			if (d == 'a'){
				return 6;
			}
			else if (d == 'u'){
				return 7;
			}
			else {
				printf("您的输入有误，请重新输入!\n");
			}
		}
	default:
		return 0;
	}
}
int main1(){
	switch (JudgeWeek()){
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	default:
		printf("您的输入有误!\n");
	}
	system("pause");
	return 0;
}