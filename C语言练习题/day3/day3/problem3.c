#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//�������ͼ��������c���������У���һ����Very Beautiful!
int main3(){
	SetConsoleOutputCP(437);	//��ʾ����127��ASCII��
	char a = 219, b = 176;
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, b, b, a, b);
	printf("%c%c%c%c%c\n", a, b, b, b, a);
	printf("%c%c%c%c%c\n", b, a, a, b, a);
	printf("%c%c%c%c%c\n", a, a, a, a, b);
	system("pause");
	return 0;
}

