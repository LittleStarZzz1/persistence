#include <stdio.h>
#include <stdlib.h>

//���õݹ麯�����÷�ʽ�����������5���ַ������෴��˳���ӡ����
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