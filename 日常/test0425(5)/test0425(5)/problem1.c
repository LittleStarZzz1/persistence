#include <stdio.h>
#include <stdlib.h>
//在整型有序数组中查找想要的数字,找到了返回下标，找不到返回 - 1.（折半查找）
int FindNumber(int a[], int size, int to_find){
	int left = 0;
	int right = size - 1;
	while (left <= right){
		int mid = (left + right) / 2;
		if (a[mid] < to_find){
			left = mid + 1;
		}
		else if (a[mid] > to_find){
			right = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
//遍历查找
int FindNumber_N(int a[], int size, int to_find){
	for (int i = 0; i < size; ++i){
		if (a[i] == to_find){
			return i;
		}
	}
	return -1;
}
int main1(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = FindNumber(arr, size, 5);
	int N = FindNumber_N(arr, size, 5);
	printf("%d\n", n);
	printf("%d\n", N);
	system("pause");
	return 0;
}