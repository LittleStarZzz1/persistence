#include <stdio.h>
#include <stdlib.h>

char* mystring(){
	char buffer[6] = { 0 };
	char* s = "Hello World!";
	for (int i = 0; i < sizeof(buffer) - 1; i++){
		buffer[i] = *(s + i);
	}
	return buffer;
}
int main2_1(){
	printf("%s\n", mystring());
	system("pause");
	return 0;
}