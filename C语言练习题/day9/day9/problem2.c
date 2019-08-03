#include <stdio.h>
#include <stdlib.h>
//利用递归方法求5!
int Factor(int n){
	if (n == 1){
		return 1;
	}
	return n * Factor(n - 1);
}
int main2(){
	printf("%d\n", Factor(5));
	system("pause");
	return 0;
}