#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//����ת��
int main(){
	int n, sn;
	printf("������һ����n�ͽ�����sn: ");
	scanf("%d %d", &n, &sn);
	char str[20] = "";
	int i = 0;
	while (n){
		int r = n % sn;
		if (r < 10){
			str[i] = r + '0';
		}
		else {
			str[i] = r - 10 + 'A';
		}
		n = n / sn;
		++i;
	}
	for (i = i - 1; i >= 0; --i){
		printf("%c", str[i]);
	}
	system("pause");
	return 0;
}