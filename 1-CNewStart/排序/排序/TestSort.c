#include <stdio.h>
#include <stdlib.h>
#include "Sort.h"

int main()
{
	int a[] = { 5, 2, 11, 6, 0, 3, 5, 2, 11 };
	int a_len = sizeof(a) / sizeof(int);

	//InsertSort(a, a_len);
	ShellSort(a, a_len);



	Print(a, a_len);

	system("pause");
	return 0;
}