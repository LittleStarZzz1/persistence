#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣� 
int main(){
	int n;
	int i;
	int sum = 0;
	int tmp = 0;
	printf("������һ������n(0 - 9): ");
	scanf("%d", &n);
	for (i = 0; i < 5; ++i){
		tmp = tmp * 10 + n;
		sum += tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}