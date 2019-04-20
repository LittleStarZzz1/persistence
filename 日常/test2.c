#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
	int ret = 0;
	for (int i = 0; i < 10; ++i){
		ret = ret ^ arr[i];
	}
	int pos;
	for (int i = 0; i < 32; ++i){
		if (ret & (1 << i)){
			pos = i;
			break;
		}
	}
	int num1 = 0, num2 = 0;
	for (int i = 0; i < 10; ++i){
		if (arr[i] & (1 << pos)){
			num1 = num1 ^ arr[i];
		}
		else {
			num2 = num2 ^ arr[i];
		}
	}
	printf("%d %d",num1,num2);
	system("pause");
	return 0;
}