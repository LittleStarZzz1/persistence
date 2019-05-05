#include <stdio.h>
#include <stdlib.h>
//一组数据中有两个数字出现了一次,其他所有数字都是成对出现的.
//使用位运算找出这个数字
int main3p(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
	int ret = 0;
	for (int i = 0; i < 10; ++i){
		ret ^= arr[i];
	}
	int pos;
	for (int i = 0; i < 32; ++i){
		if (ret & (1 << i)){
			pos = i;
			break;
		}
	}
	int num1 = 0;
	int num2 = 0;
	for (int i = 0; i < 10; ++i){
		if (arr[i] & (1 << pos)){
			num1 ^= arr[i];
		}
		else {
			num2 ^= arr[i];
		}
	}
	printf("%d %d\n", num1, num2);
	system("pause");
	return 0;
}