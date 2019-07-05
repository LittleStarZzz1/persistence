#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//输入某年某月某日,判断这一天是这一年的第几天
enum{
	Jan = 1,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Oct,
	Dec,
	Nov
};
int main(){
	int sum = 0;
	int year, month, day;
	int leap = 0;
	while (1){
		printf("请输入年 月 日: ");
		scanf("%d %d %d", &year, &month, &day);
		if (year < 0 && month < 1 && month > 12 && day < 1 && day > 31){
			printf("您的输入有误");
			continue;
		}
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
			leap = 1;
		}
		if (leap == 1 && month == 2 && day > 29){
			printf("您确定您输入的年份二月有这么多天吗!\n");
			continue;
		}
		if (leap == 0 && month == 2 && day > 28){
			printf("您确定您输入的年份二月有这么多天吗!\n");
			continue;
		}
		switch (month){
		case Jan:
			sum = 0;
			break;
		case Feb:
			sum = 31;
			break;
		case Mar:
			sum = 59;
			break;
		case Apr:
			sum = 90;
			break;
		case May:
			sum = 120;
			break;
		case Jun:
			sum = 151;
			break;
		case Jul:
			sum = 181;
			break;
		case Aug:
			sum = 212;
			break;
		case Sep:
			sum = 243;
			break;
		case Oct:
			sum = 273;
			break;
		case Dec:
			sum = 304;
			break;
		case Nov:
			sum = 334;
			break;
		}
		sum += day;
		if (leap && month > 2){
			++sum;
		}
		break;
	}
	printf("这一天是%d年的第%d天\n", year, sum);
	system("pause");
	return 0;
}
