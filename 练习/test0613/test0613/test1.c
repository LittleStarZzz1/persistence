#include <stdio.h>
#include <stdlib.h>
enum Day{	//����
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};
enum Sex{	//�Ա�
	Male,
	Female
};
enum Color{	//��ɫ
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