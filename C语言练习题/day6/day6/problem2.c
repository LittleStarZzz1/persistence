#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��������������m��n,�������Լ������С������
int main2(){
	int m, n;
	int a, b;
	int tmp;
	printf("����������������: ");
	scanf("%d %d", &m, &n);
	if (m >= n){
		a = m;
		b = n;
	}
	else {
		a = n;
		b = m;
	}	//��֤����Ϊa,С��Ϊb
	while (b != 0){
		tmp = a % b;
		a = b;
		b = tmp;
	}
	printf("���Լ��Ϊ%d\n", a);
	printf("��С������Ϊ%d\n", m * n / a);
	system("pause");
	return 0;
}