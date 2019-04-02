#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int to_find = 2;
	int left = 0;
	int right = 9;
	while (left <= right){
		int mid = (left + right) / 2;
		if (to_find < a[mid]){
			right = mid - 1;
		}
		else if (to_find > a[mid]){
			left = mid + 1;
		}
		else {
			break;
		}
	}
	if (left <= right){
		printf("找到了!\n");
	}
	else {
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}