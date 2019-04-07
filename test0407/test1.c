#include <stdio.h>
#include <stdio.h>

void reverse_string(char* string){
	if (*(++string) != '\0'){
		reverse_string(string);
	}
	printf("%c ",*(string - 1));
}
int main_4(){
	char* string = "abcdef";
	reverse_string(string);
	system("pause");
	return 0;
}