#include <stdio.h>
#include <stdlib.h>

int main1_5(){
	int i = 0;
	int j = 0;
	if ((++i > 0) || (++j > 0)){	//或运算符,前半部分为真,后半部分不执行
		printf("i = %d; j = %d\n", i, j);
	}
	system("pause");
	return 0;
}