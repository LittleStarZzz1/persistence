#include <stdio.h>
#include <stdlib.h>
#define IsBigNumber(ch) (ch <= 'Z' && ch >= 'A')
//��дһ�����򣬿���һֱ���ռ����ַ�,�����Сд�ַ��������Ӧ�Ĵ�д�ַ�
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�,��������ֲ������
int IsSmallNumber(char ch){
	return ch <= 'z' && ch >= 'a';
}
int main3(){
	char ch;
	while (1){
		ch = getchar();
		if (ch == '@'){
			break;
		}
		else if (IsSmallNumber(ch)){
			printf("%c", ch - 32);
		}
		else if (IsBigNumber(ch)){
			printf("%c", ch + 32);
		}
		else {
			printf("%c", ch);
		}
	}
	system("pause");
	return 0;
}