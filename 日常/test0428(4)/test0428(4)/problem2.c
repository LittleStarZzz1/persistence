#include <stdio.h>
#include <stdlib.h>
//���100-999֮���ˮ�ɻ��������,ˮ�ɻ�����ָһ����λ��,���λ���ֵ�������ǡ�õ��ڸ�������.
//������,ˮ�ɻ���Ҳ��������,������,��ķ˹������,��ָһ��nλ��,���λ����n�η�֮�͵��ڸ���
int main2(){
	int n;
	int a, b, c;
	int sum;
	for (n = 100; n < 1000; ++n){
		a = n / 100;
		b = n / 10 % 10;
		c = n % 10;
		sum = a * a * a + b * b * b + c * c * c;
		if (n == sum){
			printf("%d ", n);
		}
	}
	system("pause");
	return 0;
}