#include <stdio.h>
#include <stdlib.h>

//利用递归函数调用方式，将所输入的5个字符，以相反的顺序打印出来
void ReversePrint(char* str){
	if (*str == '\0'){
		return;
	}
	ReversePrint(str + 1);
	printf("%c", *str);
	return;
}
int main(){
	char str[] = "123de";
	ReversePrint(str);
	system("pause");
	return 0;
}