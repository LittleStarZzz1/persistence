
#include <stdio.h>
#include <stdlib.h>
int divide(int a, int b, int* pres){
	//判断除数为零的情况,即表示程序执行失败
	if (b == 0){
		return 0;
	}
	*pres = a / b;
	return 1;
}
int main(){
	int a = 17;
	int b = 3;
	int res;
	if (divide(a, b, &res)){
		printf("%d / %d = %d\n",a,b,res);
	}
	else {
		printf("除数为0,无法计算\n");
	}
	system("pause");
	return 0;
}
