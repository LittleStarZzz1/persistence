#include <stdio.h>
#include <stdlib.h>
//��һ�������洢���ڴ��еĶ�������1�ĸ���(�ڶ��ַ���,�ɴ�����)
int main2p(){
	int num = -10;
	int count = 0;
	int i;
	for (i = 0; i < 32; ++i){
		//���αȽ�ÿһ��������λ�Ƿ�Ϊ1
		if (num & (1 << i)){
			++count;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}