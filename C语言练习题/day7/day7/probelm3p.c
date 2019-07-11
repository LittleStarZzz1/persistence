#include <stdio.h>
#include <stdlib.h>

//从第二次开始,本次下落的高度与上一次弹起的高度相图
//通过此思路简化代码
int main(){
	double sum = 100, back = sum / 2;
	int i;
	for (i = 0; i < 9; ++i){
		sum += back * 2;
		back = back / 2;
	}
	printf("第10次落地共经过%lf米,反弹高度为%lf米\n", sum, back);
	system("pause");
	return 0;
}