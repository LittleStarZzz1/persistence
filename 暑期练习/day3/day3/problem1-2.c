#include <stdio.h>
#include <stdlib.h>

int main1_2(){
	int a = 5;	
	if (a = 0){	//�����a�Ǹ�ֵΪ0,0��ִ��if������,ִ��else
		printf("%d\n", a - 10);
	}
	else {
		printf("%d\n", a++);	//a++��������֮ǰ��ֵ
	}
	system("pause");
	return 0;
}