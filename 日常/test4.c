#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int j = 8;
	while (arr[i++] % 2 && i <= 8);	//从左边开始向右找奇数
	while (arr[j--] % 2 == 0 && j >= 0);	//从右边开始向左找偶数
	while (i <= j){	//在左边找到奇数并且在右边找到偶数就交换
		int tmp = arr[i - 1];	//进入循环的i是自增之后的i,j是自减之后的j,所以交换的是i - 1和j + 1
		arr[i - 1] = arr[j + 1];
		arr[j + 1] = tmp;
		//交换之后继续在左边找奇数,右边找偶数,找完之后跳出循环
		while (arr[i++] % 2 && i <= 8);
		while (arr[j--] % 2 == 0 && j >= 0);
	}
	for (i = 0; i < 9; ++i){
		printf("%d ",arr[i]);
	}
	system("pause");
	return 0;
}