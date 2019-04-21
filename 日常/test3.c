#include <stdio.h>
#include <stdlib.h>
//���ַ�������
int Mine_Strlen(char* str){
	int count = 0;
	while (*str != '\0'){
		++count;
		++str;
	}
	return count;
}
//���ַ������ݷ�ת
void reverse_S(char* str, int left, int right){
	char tmp;
	while (left <= right){
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		++left;
		--right;
	}
}
//���ַ��������еĵ������η�ת
void reverse_s(char* str){
	int i;
	int left = 0;
	int right;
	for (i = 0; str[i]; ++i){
		if (str[i] == ' '){	//i��ʾ�ո�λ��
			right = i - 1; 
			reverse_S(str, left, right);
			left = i + 1;	//��һ�ο�ʼ��λ��
		}
	}
	//��str[i]Ϊ'\0'ʱ������ѭ��,Ҳ��˵���һ�����ʵķ�תû�����
	right = i - 1;
	reverse_S(str, left, right);	//�����һ�����ʷ�ת
}
int main(){
	char str[] = "student a am i";
	reverse_S(str, 0, Mine_Strlen(str) - 1);
	reverse_s(str);
	printf("%s\n",str);
	system("pause");
	return 0;
}