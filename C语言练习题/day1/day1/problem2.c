#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//发放奖金根据利润提成
//利润低于或等于10万元,奖金提成10%
//利润高于10万元,小于等于20万元,低于10万元部分按10%提成,高于10万元低于20万元部分按7.5%提成
//依次类推利润高于20万元,小于等于40万元的部分提成5%
//40万元到60万元部分按3%提成
//60万元到100万元部分按1.5%提成
//超过100万元部分按1%提成
int main(){
	double i;
	double max1, max2, max4, max6, max10;
	double bonus;
	max1 = 100000 * 0.1;
	max2 = max1 + 100000 * 0.075;
	max4 = max2 + 200000 * 0.05;
	max6 = max4 + 200000 * 0.03;
	max10 = max6 + 400000 * 0.015;
	
	printf("请输入您获得的利润: ");
	scanf("%lf", &i);
	if (i <= 100000 && i > 0){
		bonus = i * 0.1;
	}
	else if (i > 100000 && i <= 200000){
		bonus = max1 + (i - 100000) * 0.075;
	}
	else if (i > 200000 && i <= 400000){
		bonus = max2 + (i - 200000) * 0.05;
	}
	else if (i > 400000 && i <= 600000){
		bonus = max4 + (i - 400000) * 0.03;
	}
	else if (i > 600000 && i <= 1000000){
		bonus = max6 + (i - 600000) * 0.015;
	}
	else if (i >= 1000000){
		bonus = max10 + (i - 100000) * 0.01;
	}
	printf("您所获得的奖金为%f\n", bonus);
	system("pause");
	return 0;
}