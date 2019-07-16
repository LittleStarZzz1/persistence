#include <stdio.h>
#include <stdlib.h>

unsigned long g_ulGlobal = 0;
void GlobalInit(unsigned long ulArg){
	ulArg = 0x01;
	return;
}
void Test(){
	GlobalInit(g_ulGlobal);
	printf("%lu\n", g_ulGlobal);
	return;
}
int main(){
	Test();
	system("pause");
	return 0;
}