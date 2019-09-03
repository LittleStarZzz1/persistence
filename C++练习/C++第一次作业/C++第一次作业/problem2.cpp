#include <iostream>

using namespace std;

//在接口中多传入一个缺省参数,如果不指定就使用A排序方式,如果指定了就按照他的
//的选择决定排序方式(至少包含三种)

//插入排序
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

//希尔排序
void ShellSort(int * src, int n){
	int i, j, k;
	int tmp;
	int gap;
	for (gap = n / 2; gap; gap /= 2){
		for (k = 0; k < gap; ++k){
			for (i = gap + k; i < n; i += gap){
				tmp = src[i];
				for (j = i; j >= gap && src[j - gap] > tmp; j -= gap){
					src[j] = src[j - gap];
				}
				src[j] = tmp;
			}
		}
	}
}

//归并排序
void dealMergeSort(int * src, int * tmp, int start, int end){
	
	if (start >= end){
		return;
	}

	int mid = (start + end) / 2;
	dealMergeSort(src, tmp, start, mid);
	dealMergeSort(src, tmp, mid + 1, end);

	int a = start, b = mid + 1;
	int c = start;

	while (a <= mid && b <= end){
		if (src[a] < src[b]){
			tmp[c] = src[a];
			a++;
		}
		else {
			tmp[c] = src[b];
			b++;
		}
		c++;
	}

	for (; a <= mid; ++a, c++){
		tmp[c] = src[a];
	}
	for (; b <= end; ++b, c++){
		tmp[c] = src[b];
	}

	int i;
	for (i = start; i <= end; ++i){
		src[i] = tmp[i];
	}
}
void MergeSort(int * src, int n){
	int * tmp = (int *)malloc(sizeof(int)* n);

	dealMergeSort(src, tmp, 0, n - 1);

	free(tmp);
}

void sort(int * src, int n, int flag = 0){
	switch (flag){
		case 0:
			InsertSort(src, n);
			break;
		case 1:
			ShellSort(src, n);
			break;
		case 2:
			MergeSort(src, n);
			break;
		default :
			break;
			
	}
}

int main2(){
	int src[11] = { 3, 1, 6, 7, 9, 2, 4, 8, 10, 5, 11 };

	sort(src, 11, 2);

	for (auto i : src){
		cout << i << endl;
	}
	system("pause");
	return 0;
}