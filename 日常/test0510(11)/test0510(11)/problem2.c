#include <stdio.h>
#include <stdlib.h>
////���һ��������ÿһλ
int Print(int n){
	if (n > 10){
		Print(n / 10);
	}
	printf("%d ", n % 10);
}
int main2(){
	Print(1234);
	system("pause");
	return 0;
}