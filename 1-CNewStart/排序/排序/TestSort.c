#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include "Sort.h"

void testSortClock()
{
	srand(time(0));
	const int N = 100000;

	int *a1 = (int*)malloc(sizeof(int) * N);
	int *a2 = (int*)malloc(sizeof(int)* N);
	int *a3 = (int*)malloc(sizeof(int)* N);
	int *a4 = (int*)malloc(sizeof(int)* N);
	int *a5 = (int*)malloc(sizeof(int)* N);
	//int *a6 = (int*)malloc(sizeof(int)* N);

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		//a6[i] = a1[i];
	}

	int begin1 = clock();
	InsertSort(a1, N);
	int end1 = clock();
	printf("InsertSort: %d\n", end1- begin1);

	int begin2 = clock();    
	ShellSort(a2, N);    
	int end2 = clock();
	printf("ShellSort: %d\n", end2 - begin2);

	int begin3 = clock();    
	SelectSort(a3, N);    
	int end3 = clock();
	printf("Selectort: %d\n", end3 - begin3);

	int begin4 = clock();    
	HeapSort(a4, N);    
	int end4 = clock();
	printf("HeapSort: %d\n", end4 - begin4);

	int begin5 = clock();    
	QuickSort(a5, N);    
	int end5 = clock();
	printf("QuickSort: %d\n", end5 - begin5);

	//printf("InsertSort: %d\n", begin1 - end1);
	//printf("ShellSort: %d\n", end2 - begin2);
	//printf("Selectort: %d\n", end3 - begin3);
	//printf("HeapSort: %d\n", end4 - begin4);
	//printf("QuickSort: %d\n", end5 - begin5);
	//printf("InsertSort: %d\n", begin1 - end1);

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);

}

int main()
{
	//int a[] = { 5, 2, 11, 6, 0, 3, 5, 2, 11 };
	//int a_len = sizeof(a) / sizeof(int);

	//InsertSort(a, a_len);
	//ShellSort(a, a_len);
	//SelectSort(a, a_len);
	//HeapSort(a, a_len);
	//BubbleSort(a, a_len);
	//QuickSort(a, a_len);


	//Print(a, a_len);

	testSortClock();

	system("pause");
	return 0;
}