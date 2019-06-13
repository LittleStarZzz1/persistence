#include <stdio.h>
#include <stdlib.h>
//关于联合体大小的计算
union Un1{
	char c[5];
	int i;
};
union Un2{
	short c[7];
	int i;
};
int main(){
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	system("pause");
	return 0;
}