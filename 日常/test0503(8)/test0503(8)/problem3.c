#include <stdio.h>
#include <stdlib.h>
//һ��������ֻ��һ�����ֳ�����һ��,�����������ֶ��ǳɶԳ��ֵ�.
//ʹ��λ�����ҳ��������
int main(){
	int arr[7] = { 1, 2, 3, 4, 3, 1, 2 };
	int ret = 0;
	for (int i = 0; i < 7; ++i){
		ret ^= arr[i];
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}