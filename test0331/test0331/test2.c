#include <stdio.h>
#include <stdlib.h>

int Factor(int n);
int main(){
	int sum = 0;
	for (int i = 1; i < 11; ++i){
		sum += Factor(i);
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}