#include <stdio.h>
#include<stdlib.h>

int findArgs(int a[], int n, int f){
	int i;
	for (i = 0; i <= n; ++i){
		if (a[i] = f){
			return 1;
		}
	}
	return -1;
}
int halffindArgs(int a[], int n, int f){
	int left = 0;
	int right = n - 1;
	int mid;
	while (left <= right){
		mid = (left + right) / 2;
		if (f < a[mid]){
			right = mid - 1;
		}
		else if (f > a[mid]){
			left = mid + 1;
		}
		else {
			break;
		}
	}
	if (left <= right){
		return mid;
	}
	else {
		return -1;
	}
}
int main(){
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("%d\n",findArgs(a,10,8));
	system("pause");
	return 0;
}