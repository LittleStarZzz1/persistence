
#include <stdio.h>
#include <stdlib.h>
int divide(int a, int b, int* pres){
	//�жϳ���Ϊ������,����ʾ����ִ��ʧ��
	if (b == 0){
		return 0;
	}
	*pres = a / b;
	return 1;
}
int main(){
	int a = 17;
	int b = 3;
	int res;
	if (divide(a, b, &res)){
		printf("%d / %d = %d\n",a,b,res);
	}
	else {
		printf("����Ϊ0,�޷�����\n");
	}
	system("pause");
	return 0;
}
