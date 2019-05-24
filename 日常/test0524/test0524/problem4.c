#include <stdio.h>
#include <stdlib.h>
//函数指针作为函数参数出现
Add(int x, int y);
//函数指针作为函数参数出现
void test(int a, int b, int(*p)(int, int)){
	printf("%d\n", p(a, b));
}
int main(){
	test(3, 9, Add);
	system("pause");
	return 0;
}