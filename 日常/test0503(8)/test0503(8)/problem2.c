#include <stdio.h>
#include <stdlib.h>
//��ʹ��(a + b) / 2���ַ�ʽ,����������ƽ��ֵ
int Average(int a, int b){
	int tmp;
	int average;
	if (a > b){
		tmp = a - b;
		average = b + tmp / 2;
	}
	else {
		tmp = b - a;
		average = a + tmp / 2;
	}
	return average;

}
int main(){
	int num1 = 10;
	int num2 = 20;
	printf("%d\n", Average(num1, num2));
	system("pause");
	return 0;
}