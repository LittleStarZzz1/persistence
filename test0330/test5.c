#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define IsBigLetter(ch) (ch > 'A' && ch < 'Z')

int IsSmallLetter(char ch){
	if (ch > 'a' && ch < 'z'){
		return 1;
	}
}


int main(){
	char ch;
	while (1){
		ch = getchar();
		if (ch == '!'){
			break;
		}
		if (IsSmallLetter(ch)){
			putchar(ch - 32);
		}
		else if (IsBigLetter(ch)){
			putchar(ch + 32);
		}
		else {
			putchar(ch);
		}
	}
	system("pause");
	return 0;
}