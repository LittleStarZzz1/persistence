#include <stdio.h>
#include <stdlib.h>
//联合类型的声明
union Un{
	char c;
	int i;
};
//联合变量的定义
union Un un;
int main2(){
	//计算联合变量的大小
	printf("%d\n", sizeof(un));
	system("pause");
	return 0;
}