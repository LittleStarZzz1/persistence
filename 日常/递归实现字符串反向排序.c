#include <stdio.h>
#include <stdlib.h>
//��дһ������reverse_string(char* string)(�ݹ�ʵ��) 
//ʵ��:�������ַ����е��ַ���������.
int Strlen(char* str){	//���庯�����ַ�������
	int i;
	//��str[i] = '\0'ʱ����ѭ��,��ʱi�����ַ����ĳ���
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