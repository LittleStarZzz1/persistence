#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��n������,ʹ��ǰ��ĸ���˳�������m��λ��
//���m���������ǰ���m����

int main(){
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[] = { 0 };
	int* p = a;
	int n = sizeof(a) / sizeof(a[0]);
	int m;
	printf("������һ������: ");
	scanf("%d", &m);
	printf("ԭ����Ϊ: ");
	for (int i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	putchar('\n');
	p = p + n - m;
	for (int i = 0; i < m; ++p, ++i){
		b[i] = *p;
	}
	for (int i = m; i < n; ++i){
		b[i] = a[i - m];
	}
	printf("������: ");
	for (int i = 0; i < n; ++i){
		printf("%d ", b[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}