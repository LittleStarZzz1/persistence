#include <stdio.h>
#include <stdlib.h>

enum ENUM_A{
	X1,
	Y1,
	Z1 = 5,
	A1,
	B1
};
enum ENUM_A enumA = Y1;
enum ENUM_A enumB = B1;
int main2_2(){
	printf("%d %d\n", enumA, enumB);
	system("pause");
	return 0;
}