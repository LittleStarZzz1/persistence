#include <stdio.h>
#include <stdlib.h>
//一组数据中只有一个数字出现了一次,其他所有数字都是成对出现的.
//使用位运算找出这个数字
int main(){
	int arr[7] = { 1, 2, 3, 4, 3, 1, 2 };
	int ret = 0;
	for (int i = 0; i < 7; ++i){
		ret ^= arr[i];
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}