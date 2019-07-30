#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Subscript{
	int x;	//��ʾһ�������±�
	int y;	//��ʾ��һ�������±�
}A;
A Array;
void FindSubscript(int* a, int n, int add){
	int left = 0;
	int right = n - 1;
	int sum = 0;
	while (left <= right){
		sum = a[left] + a[right];
		if (sum > add){
			right--;
		}
		else if (sum < add){
			left++;
		}
		else {
			Array.x = left;
			Array.y = right;
			break;
		}
	}
}
int main(){
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int add;
	int n = sizeof(a) / sizeof(a[0]);
	printf("������һ������: ");
	scanf("%d", &add);
	FindSubscript(a, n, 4);
	printf("%d, %d\n", Array.x, Array.y);
	system("pause");
	return 0;
}



