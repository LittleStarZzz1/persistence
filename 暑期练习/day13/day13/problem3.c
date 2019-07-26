#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//输入两个字符串，从第一个字符串中删除第二个字符串中的所有字符
//比如输入“They are students."
//删除之后的第一个字符串变成"The r stdnts."
void DeleteStr(char* str1, char* str2){
	char* pFast = str1;
	char* pSlow = str2;
	int a[256] = { 0 };
	int i;
	int n = strlen(str2);
	for (i = 0; i < n; ++i){
		a[str2[i]] = 1;
	}
	//while (*pFast){
	//	if (a[*pFast] == 1){
	//		*pFast++;
	//	}
	//	*pSlow++ = *pFast++;
	//}
	while (*pFast){
		if (a[*pFast] == 0){
			*pSlow = *pFast;
			pSlow++;
		}
		pFast++;
	}
	*pSlow = '\0';
}
int main(){
	char str1[] = "They aaaare students.";
	char str2[] = "aeiou";
	DeleteStr(str1, str2);
	printf("%s\n", str2);
	system("pause");
	return 0;
}