#include <stdio.h>
#include <stdlib.h>

//一个整型数组里除了两个数字之外，其他的数字都出现了两次
//找出这个只出现一次的数字
//例如{ 1, 3, 5, 7, 1, 3, 5, 9 };
//找出7和9
int main(){
	int arr[] = { 1, 3, 5, 7, 1, 3, 5, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;
	int tmp = 0;
	int pos;
	int a = 0;
	int b = 0;
	for (i = 0; i < n; ++i){
		tmp ^= arr[i];
	}
	for (i = 0; i < 32; ++i){
		if (tmp & (1 << i)){
			pos = i;
			break;
		}
	}
	for (i = 0; i < n; ++i){
		if (arr[i] & (1 << pos)){
			a ^= arr[i];
		}
		else {
			b ^= arr[i];
		}
	}
	printf("%d, %d\n", a, b);
	system("pause");
	return 0;
}