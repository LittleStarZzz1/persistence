#include <stdio.h>
#include <stdlib.h>
//����ָ����Ϊ��������ֵ����
Add(int x, int y);
//����fn�ķ���ֵΪָ��(ָ���� int  xx(int a, int b)��ָ��)
int(*fn(int n))(int a, int b){
	printf("fn: n = %d\n", n);
	return Add;
}
int main3(){
	int value = fn(100)(3, 9);
	printf("%d\n", value);
	system("pause");
	return 0;
}