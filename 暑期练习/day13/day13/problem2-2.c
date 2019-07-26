#include <stdio.h>
#include <stdlib.h>

int f(int n){
	static int i = 1;
	if (n > 5){
		return n;
	}
	n = n + i;
	i++;
	return f(n);
}
int main2_2(){
	printf("%d\n", f(1));
	system("pause");
	return 0;
}