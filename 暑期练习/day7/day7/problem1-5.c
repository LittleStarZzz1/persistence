#include <stdio.h>
#include <stdlib.h>

int main1_5(){
	int i = 0;
	int j = 0;
	if ((++i > 0) || (++j > 0)){	//�������,ǰ�벿��Ϊ��,��벿�ֲ�ִ��
		printf("i = %d; j = %d\n", i, j);
	}
	system("pause");
	return 0;
}