#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�ӱ�׼���ݶ�ȡһ������,������������洢��һ����̬����
//��������,����ĵ�һ��Ԫ���������ĸ���,�Ժ���������Щ����
#define N 10
int main(){
	int* p = NULL;
	int num;
	int n = 0;
	int size = N;
	int* q = NULL;
	p = (int*)malloc(sizeof(int) * (size + 1));
	while (1 == scanf("%d", &num)){
		n++;
		if (n > size){
			size = size + N;
			q = (int*)realloc(p, sizeof(int) * (size + 1));
			if (q != NULL){
				p = q;
			}
		}
		p[n] = num;
	}
	p[0] = n;
	q = (int*)realloc(p, sizeof(int) * (n + 1));
	if (q != NULL){
		p = q;
	}
	for (int i = 0; i <= n; ++i){
		printf("%d ", p[i]);
	}
	printf("\n");
	free(p);
	p = NULL;
	system("pause");
	return 0;
}
