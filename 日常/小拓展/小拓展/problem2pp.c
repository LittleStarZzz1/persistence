#include <stdio.h>
#include <stdlib.h>
//��һ�������洢���ڴ��еĶ�������1�ĸ���(�����ַ���)
//�����Ż�,����Ҫѭ��32��
int main2pp(){
	int num = 10;
	int count = 0;
	while (num != 0){
		++count;
		num = num & (num - 1);	//ÿִ��һ��,����һ���������е�1
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}