#include <stdio.h>
#include <stdlib.h>
//����һ��Func1��������ִ���˶��ٴ�
void Func1(int N){
	int count = 0;
	for (int i = 0; i < N; ++i){
		for (int j = 0; j < N; ++j){
			++count;
		}
	}
	for (int k = 0; k < 2 * N; ++k){
		++count;
	}
	int M = 10;
	while (M--){
		++count;
	}
	printf("%d\n", count);
}
int main(){
	Func1(20);
	system("pause");
	return 0;
}