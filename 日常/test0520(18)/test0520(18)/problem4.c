#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
//ģ��ʵ��strchr
//strchr�����ַ����в����ַ��Ƿ����
//�ҵ��󽫸��ַ���ַ��Ϊ����ֵ
char* my_strchr(const char* str, char a){
	assert(str);
	char* ret = (char*)str;
	if (*ret == a){
		return ret;
	}
	while (ret++){
		if (*ret == a){
			return ret;
		}
	}
	return NULL;
}
int main4(){
	char str[] = "i am a student";
	char* p = NULL;
	if (p = my_strchr(str, '\0')){
		puts(p);
	}
	else {
		printf("û�ҵ�!\n");
	}
	system("pause");
	return 0;
}