#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��һ���������ֽ�������,����,����90,��ӡ��90 = 2 * 3 * 3 * 5
int main(){
	int n;
	printf("������һ��������: ");
	scanf("%d", &n);
	printf("%d = ", n);
	for (int i = 2; i <= n; ++i){
		while (n != i){
			if (n % i == 0){
				printf("%d * ", i);
				n /= i;
			}
			else {
				break;
			}
		}
	}
	printf("%d\n", n);
	system("pause");
	return 0;
}