#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//���������ַ������ӵ�һ���ַ�����ɾ���ڶ����ַ����е������ַ�
//�������롰They are students."
//ɾ��֮��ĵ�һ���ַ������"The r stdnts."
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