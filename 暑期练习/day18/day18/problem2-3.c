#include <stdio.h>
#include <stdlib.h>

int main2_3(){
	int i, x, y;
	i = x = y = 0;
	do {
		++i;
		if (i % 2)
			x += i,
			i++;
		y += i++;
	} while (i <= 7);
	printf("%d %d %d", i, x, y);
	system("pause");
	return 0;
}