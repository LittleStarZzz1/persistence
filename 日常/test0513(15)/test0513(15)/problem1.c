#include <stdio.h>
#include <stdlib.h>
//一个数组中只有两个数字是出现一次 
//其他所有数字都出现了两次
//找出这两个只出现一次的数字,编程实现.
int main2(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;
	int pos;
	int ret = 0;
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < size; ++i){
		ret = ret ^ arr[i];
	}
	for (i = 0; i < 32; ++i){
		if (ret & (1 << i)){
			pos = i;
		}
	}
	for (i = 0; i < size; ++i){
		if (arr[i] & (1 << pos)){
			num1 = num1 ^ arr[i];
		}
		else {
			num2 = num2 ^ arr[i];
		}
	}
	printf("num1 = %d, num2 = %d\n", num1, num2);
	system("pause");
	return 0;
}