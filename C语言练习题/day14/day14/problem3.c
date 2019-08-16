#include <stdio.h>
#include <stdlib.h>

//学习使用auto定义变量的用法
int main(){
	int i, num;
	num = 2;
	for (i = 0; i < 3; i++){
		printf("num = %d\n", num);
		num++;
		{
			auto int auto_num = 1;
			printf("auto_num = %d\n", auto_num);
			auto_num++;
		}
	}
	system("pause");
	return 0;
}