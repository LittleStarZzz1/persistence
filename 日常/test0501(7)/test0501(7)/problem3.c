#include <stdio.h>
#include <stdlib.h>
//дһ���ݹ麯��,����һ���Ǹ�����,���������������֮��
int DigitSum(int n){
	if (n > 9){
		return (n % 10) + DigitSum(n / 10);
	}
	return n;
}
int main3(){
	printf("%d\n",DigitSum(1234));
	system("pause");
	return 0;
}