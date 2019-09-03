#include <iostream>

using namespace std;

//完成一个排序接口,能完成对整数和小数的排序

//插入排序
/*
void InsertSort(int* src, int n){
	int i, j;
	int tmp;
	for (i = 1; i < n; ++i){
		tmp = src[i];
		for (j = i; j > 0 && src[j - 1] > tmp; --j){
			src[j] = src[j - 1];
		}
		src[j] = tmp;
	}
}
//函数重载
void InsertSort(float* src, int n){
	int i, j;
	float tmp;
	for (i = 1; i < n; ++i){
		tmp = src[i];
		for (j = i; j > 0 && src[j - 1] > tmp; --j){
			src[j] = src[j - 1];
		}
		src[j] = tmp;
	}
}

int main1(){
	int a[5] = { 5, 1, 4, 2, 3 };
	float f[5] = {  3.1, 0.6, 1.1, 2.6, 8.8 };

	InsertSort(a, 5);
	InsertSort(f, 5);

	for (auto i : a){
		cout << i << endl;
	}

	for (auto i : f){
		cout << i << endl;
	}

	system("pause");
	return 0;
}
*/