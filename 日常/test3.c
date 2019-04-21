#include <stdio.h>
#include <stdlib.h>
//求字符串长度
int Mine_Strlen(char* str){
	int count = 0;
	while (*str != '\0'){
		++count;
		++str;
	}
	return count;
}
//将字符串内容翻转
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
//将字符串内容中的单词依次翻转
void reverse_s(char* str){
	int i;
	int left = 0;
	int right;
	for (i = 0; str[i]; ++i){
		if (str[i] == ' '){	//i表示空格位置
			right = i - 1; 
			reverse_S(str, left, right);
			left = i + 1;	//下一次开始的位置
		}
	}
	//当str[i]为'\0'时会跳出循环,也就说最后一个单词的翻转没有完成
	right = i - 1;
	reverse_S(str, left, right);	//将最后一个单词翻转
}
int main(){
	char str[] = "student a am i";
	reverse_S(str, 0, Mine_Strlen(str) - 1);
	reverse_s(str);
	printf("%s\n",str);
	system("pause");
	return 0;
}