#include <stdio.h>
#include <stdlib.h>

//��һ���Ѿ��ź��������,��
//����һ����,Ҫ��ԭ���Ĺ��ɽ�������������.
int main(){
	int a[] = { 1, 4, 6, 8, 9, 10, 11, 13, 16, 18, 20 };
	int n = sizeof(a) / sizeof(a[0]);
	int m;
	int i, j;
	printf("ԭ����Ϊ��");
	for (i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	putchar('\n');
	printf("������һ���µ�����: ");
	scanf("%d", &m);
	if (m >= a[n - 1]){
		a[n] = m;
	}
	else {
		for (i = 0; i < n; ++i){
			if (m <= a[i]){
				for (j = n - 1; j >= i; --j){
					a[j + 1] = a[j];
				}
				a[i] = m;
				break;
			}
		}
	}
	printf("���������ֺ�����飺");
	for (i = 0; i < n + 1; ++i){
		printf("%d ", a[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}