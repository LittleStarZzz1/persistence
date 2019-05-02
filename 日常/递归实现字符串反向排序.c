#include <stdio.h>
#include <stdlib.h>
//编写一个函数reverse_string(char* string)(递归实现) 
//实现:将参数字符串中的字符反向排列.
int Strlen(char* str){	//定义函数求字符串长度
	int i;
	//当str[i] = '\0'时跳出循环,此时i就是字符串的长度
	for (i = 0; str[i]; ++i);
	return i;
}
void reverse_string(char* string){
	int end = Strlen(string) - 1;
	char tmp = string[0];
	if (string[0]){
		string[0] = string[end];
		string[end] = '\0';
		reverse_string(string + 1);
		string[end] = tmp;
	}
}
int main(){
	char str[] = "huanyinnin";
	reverse_string(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}