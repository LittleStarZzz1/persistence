#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//ģ��ʵ��memcpy
char* my_mrmcpy(char* str1, const char* str2, unsigned int n){
	assert(str1);
	assert(str2);
	char* ret = str1;
	while (n){
		*(char*)str1 = *(char*)str2;
		str1 = (char*)str1 + 1;
		str2 = (char*)str2 + 1;
		--n;
	}
	return ret;
}
int main6(){
		char str1[20] = "abcdefghi";
		char str2[20] = "123";
		int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
		int arr2[10] = { 9, 8, 10 };
		int i;
		int n;
		n = sizeof(arr1) / sizeof(arr1[0]);
		//memcpy(str1, str2, 1);
		//memcpy(arr1, arr2, 2 * sizeof(int));
		//memcpy(arr1, arr1 + 2, 2 * sizeof(int));
		memcpy(arr1 + 2, arr1, 4 * sizeof(int));
		//ע�⵱arr1��arr2���κ��ڴ��ص�ʱ,���ƵĽ������δ�����
		for (i = 0; i < n; ++i){
			printf("%d ", arr1[i]);
		}
		//puts(str1);
		system("pause");
		return 0;
	}