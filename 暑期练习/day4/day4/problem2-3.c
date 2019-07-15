#include <stdio.h>
#include <stdlib.h>

int fun(int x, int y){
	static int m = 0;
	static int i = 2;
	i += m + i;
	m = i + x + y;
	return m;
}
int main2_3(){
	int j = 4;
	int m = 1;
	int k;
	k = fun(j, m);
	printf("%d\n", k);
	k = fun(j, m);
	printf("%d\n", k);
	system("pause");
	return 0;
}