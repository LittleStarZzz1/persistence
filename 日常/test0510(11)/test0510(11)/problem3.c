#include <stdio.h>
#include <stdlib.h>
//���ʵ�֣� 
//����int(32λ)����m��n�Ķ����Ʊ����,�ж��ٸ�λ(bit)��ͬ
int main(){
	int num1 = 10;
	int num2 = 20;
	int ret = num1 ^ num2;
	int count = 0;
	int i;
	printf("num1ת��Ϊ��������Ϊ:");
	for (i = 31; i >= 0; --i){
		printf("%d", (num1 >> i) & 1);
	}
	printf("\n");
	printf("num2ת��Ϊ��������Ϊ:");
	for (i = 31; i >= 0; --i){
		printf("%d", (num2 >> i) & 1);
	}
	printf("\n");
	for (int i = 0; i < 32; ++i){
		if (ret & (1 << i)){
			++count;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}