#pragma once

//≤Â»Î≈≈–Ú
void InsertSort(int* a, int n);

//œ£∂˚≈≈–Ú
void ShellSort(int* a, int n);

//—°‘Ò≈≈–Ú
void SelectSort(int* a, int n);








void InsertSort(int* a, int n)
{
	int i, j;
	for (i = 1; i < n; ++i)
	{
		int tmp = a[i];
		for ( j = i - 1; j >= 0 && tmp < a[j]; --j)
		{
			//if (tmp < a[j])
			//{
				a[j + 1] = a[j];
			//}
			//else
			//{
			//	break;
			//}
		}
		a[j + 1] = tmp;
	}
}

//œ£∂˚≈≈–Ú
void ShellSort(int* a, int n)
{
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = 0; i < n - gap; ++i)
		{

			int end = i;
			int tmp = a[end + gap];

			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}



//¥Ú”°∫Ø ˝
void Print(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}