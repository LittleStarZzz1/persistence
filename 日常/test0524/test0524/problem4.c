#include <stdio.h>
#include <stdlib.h>
//����ָ����Ϊ������������
Add(int x, int y);
//����ָ����Ϊ������������
void test(int a, int b, int(*p)(int, int)){
	printf("%d\n", p(a, b));
}
int main(){
	test(3, 9, Add);
	system("pause");
	return 0;
}