#include <stdio.h>
#include <stdlib.h>
//�������͵�����
union Un{
	char c;
	int i;
};
//���ϱ����Ķ���
union Un un;
int main2(){
	//�������ϱ����Ĵ�С
	printf("%d\n", sizeof(un));
	system("pause");
	return 0;
}