#include <stdio.h>
#include <stdlib.h>
//��һ�������洢���ڴ��еĶ�������1�ĸ���
int main2(){
	int num = 10;
	int count = 0;
	//���ַ�����ȱ����ֻ���Դ�������
	while (num != 0){
		if (num % 2 == 1){
			++count;
		}
		num = num >> 1;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}