#include <stdio.h>
#include <stdlib.h>

int f(int a){	//�β�ֻ��ʵ�ε�һ�ݿ���,�����޸��β�,������Ӱ��a��ֵ
	int b = 0;
	static int c = 3;
	a = c++, b++;
	return (a);
}
int main2_1(){
	int a = 2, i, k;
	for (i = 0; i < 2; i++){
		k = f(a++);
	}
	printf("%d\n", k);	//���Ϊ4
	system("pause");
	return 0;
}