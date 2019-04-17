#include <stdio.h>
#include <stdlib.h>
int main_3(){
	int arr[7] = { 1, 2, 3, 4, 2, 3, 1 };
	int ret = 0;
	for (int i = 0; i < 7; ++i){	//遍历
		//初始ret = 0,也就是说每次与一个新数按位异或二进制位上就多一个1
		//如果这个这个数会成对出现,也就是说会再与这个数按位取反
		//就消掉了之前二进制位上多出的1,没有成对出现,遍历之后便会保留
		ret = ret ^ arr[i];
	}
	printf("这组数据中没有成对出现的数是: %d\n",ret);
	system("pause");
	return 0;
}