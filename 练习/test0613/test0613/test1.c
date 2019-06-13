#include <stdio.h>
#include <stdlib.h>
enum Day{	//星期
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};
enum Sex{	//性别
	Male,
	Female
};
enum Color{	//颜色
	Red = 1,
	Yellow = 2,
	Blue = 4
};
enum Color clr = Blue;
//clr = 5;
int main1(){
	printf("%d\n", clr);
	system("pause");
	return 0;
}