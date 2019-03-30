#include <stdio.h>
#include <stdlib.h>
int findArgs(int a[], int n, int f){
	int i;
	for (i = 0; i <= n; ++i){
		if (a[i] == f){
			return i;
		}
	}
	return -1;
}
int halfFindArgs(int a[], int n, int f){
	int left = 0;
	int right = n - 1;
	int mid;
	while (left <= right){
		int mid = (left + right) / 2;
		if (f < a[mid]){
			right = mid - 1;
		}
		else if (f > a[mid]){
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
int main3(){
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("%d\n",halfFindArgs(a, 10, 6));
	system("pause");
	return 0;
}