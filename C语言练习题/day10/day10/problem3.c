#include <stdio.h>
#include <stdlib.h>

//一个5位数，判断它是不是回文数
//例如12321是回文数，个位与万位相同，十位与千位相同
int JudgeNumber(int n){
	int i;
	int sum = 0;
	int tmp;
	for (i = n; i; i = i / 10){
		tmp = i % 10;
		sum = sum * 10 + tmp;
	}
	if (sum == n){
		return 1;
	}
	return 0;
}
int main(){
	if (JudgeNumber(12321)){
		printf("该数字是回文数!\n");
	}
	else {
		printf("该数字不是回文数!\n");
	}
	system("pause");
	return 0;
}