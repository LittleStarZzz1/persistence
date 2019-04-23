#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = 9;
	int to_find = 5;
	while (left <= right){
		int mid = (left + right) / 2;
		if (to_find > arr[mid]){
			left = mid + 1;
		}
		else if (to_find < arr[mid]){
			right = mid - 1;
		}
		else {
			printf("找到了!\n");
			break;
		}
	}
	if (left > right){
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}