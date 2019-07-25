#include <stdio.h>
#include <stdlib.h>

int main2_3(){
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++){
		a[i] = (char)(-1 - i);
	}
	printf("%d\n", strlen(a));
	system("pause");
	return 0;
}