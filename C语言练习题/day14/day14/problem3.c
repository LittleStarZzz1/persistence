#include <stdio.h>
#include <stdlib.h>

//ѧϰʹ��auto����������÷�
int main(){
	int i, num;
	num = 2;
	for (i = 0; i < 3; i++){
		printf("num = %d\n", num);
		num++;
		{
			auto int auto_num = 1;
			printf("auto_num = %d\n", auto_num);
			auto_num++;
		}
	}
	system("pause");
	return 0;
}