#include <stdio.h>
#include <stdlib.h>

int main2_3(){
	int x = 0;
	switch (++x){
	case 0: ++x;
	case 1: ++x;
	case 2: ++x;
	}
	printf("%d\n", x);
	system("pause");
	return 0;
}