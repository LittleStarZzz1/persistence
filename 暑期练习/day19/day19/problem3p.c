#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//�ַ���ѹ��
//���磺"xxxyyyyz"ѹ�����ַ���Ϊ"3x4yz"
//"yyyyyyy"ѹ����Ϊ"7y"
//�������һ���Ż�
//��ʱֻ����1-99
void CutStringP(char* str){
	assert(str);
	char* p1 = str;
	char* p2 = str;
	while (*p2){
		int count = 1;
		if (*p2 == *(p2 + 1)){
			while (*p2 == *(p2 + 1)){
				count++;
				p2++;
			}
			if (count <= 9){
				*p1 = count + '0';
				p1++;
				*p1 = *p2;
				p1++;
				p2++;
				*p1 = *p2;
			}
			else {
				*p1 = count / 10 + '0';
				p1++;
				*p1 = count % 10 + '0';
				p1++;
				*p1 = *p2;
				p1++;
				p2++;
				*p1 = *p2;
			}
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
int main(){
	//char str[] = "xxxyyyyz";
	char str[] = "xxxxxxxxxxxxxxxzyyyyyyyyyyyyyyyyyyyyyyyyyyyyz"; 
	CutStringP(str);
	puts(str);
	system("pause");
	return 0;
}