#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Press any key to change color, do you want to try it. Please hurry up!
int main2(){
	int color;
	for (color = 0; color < 8; color++){
		textbackground(color);
		cprintf("This is color %d/r/n", color);
		cprintf("Press any key to continue/r/n");
		getch();
	}
	system("pause");
	return 0;
}