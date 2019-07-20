#include <stdio.h>
#include <stdlib.h>

//编写函数求数组中元素出现次数超过数组长度一半的数字
//比如{ 1, 2, 3, 2, 2, 2, 5, 5, 2 },2为超过数组长度一半的数字
int main3(){
	int a[] = { 1, 2, 3, 2, 2, 2, 5, 5, 2 };
	int n = sizeof(a) / sizeof(a[0]);
	int size = n / 2;
	int i, j;
	int count = 0;
	for (i = 0; i < n; ++i){
		for (j = 0; j < n; ++j){
			if (a[i] == a[j]){
				++count;
			}
		}
		if (count > size){
			printf("%d\n", a[i]);
		}
		count = 0;
	}
	system("pause");
	return 0;
}