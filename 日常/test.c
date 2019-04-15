#include <stdio.h>
#include <stdlib.h>
int main(){
	int num = 10;
	//把num的第五个比特位设为1
	num = num | (1 << 5);
	//把num的第五个比特位设为0
	//num = num & ~(1 << 5);
	printf("%d\n",num);
	system("pause");
	return 0;
}