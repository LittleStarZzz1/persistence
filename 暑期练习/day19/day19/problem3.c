#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//�ַ���ѹ��
//���磺"xxxyyyyz"ѹ�����ַ���Ϊ"3x4yz"
//"yyyyyyy"ѹ����Ϊ"7y"
void CutString(char* str){
	assert(str);
	char* p1 = str;
	char* p2 = str;
	while (*p2){
		char count = '1';
		if (*p2 == *(p2 + 1)){
			while (*p2 == *(p2 + 1)){
				count++;
				p2++;
			}
			*p1 = count;
			p1++;
			*p1 = *p2;
			p1++;
			p2++;
			*p1 = *p2;
		}
		else {
			p1++;
			p2++;
			*p1 = *p2;
		}
	}
	p1++;
	*p1 = '\0';
}
int main3(){
	char str[] = "xxxyyyyz";
	CutString(str);
	puts(str);
	system("pause");
	return 0;
}