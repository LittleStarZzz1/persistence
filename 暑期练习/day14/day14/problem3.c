#include <stdio.h>
#include <stdlib.h>

//��дһ������,��һ�������Ƿ��ǻ�����
int main(){
	int n;
	int i;
	int tmp;
	int sum = 0;
	printf("������һ������; ");
	scanf("%d", &n);
	for (i = n; i; i /= 10){
		tmp = i % 10;
		sum = sum * 10 + tmp;
	}
	if (sum == n){
		printf("%d�ǻ�����!\n", n);
	}
	system("pause");
	return 0;
}