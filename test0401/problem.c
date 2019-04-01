#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
	char str1[] = "Welcome to Tianjing!";
	char str2[] = "####################";
	int left = 0;
	int right = strlen(str1) - 1;
	while (left <= right){
		printf("%s\n", str2);
		str2[left] = str1[left];
		str2[right] = str1[right];
		++left;
		--right;
		Sleep(1000);
		system("cls");
	}

	system("pause");
	return 0;
}