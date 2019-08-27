#include <iostream>

using namespace std;

bool cmpnum(int a, int b){
	return a < b;
}

void InsertSort(int * src, int n, bool (*cmp)(int , int) = cmpnum){
	int i, j;
	int tmp;
	for (i = 1; i < n; ++i){
		tmp = src[i];
		for (j = i; j > 0 && cmp(tmp, src[j - 1]); j--){
			src[j] = src[j - 1];
		}
	}
	src[j] = tmp;
}
int _main(){
	int a[10] = { 2, 4, 5, 1, 3, 9, 10, 22, 13, 6 };

	InsertSort(a, 10, cmpnum);

	for (int i = 0; i < 10; ++i){
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}