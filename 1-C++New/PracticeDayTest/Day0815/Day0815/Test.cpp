#include <iostream>
#include <stack>

using namespace std;


//当快排接近有序的时候, 由于我们在一端选择key值, 因此导致快排效率极低
//为了优化快排, 使用三数取中
int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) >> 1;
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
			return mid;
		else if (a[begin] < a[end]) //a[mid] >= a[end]
			return end;
		else
			return begin;
	}
	else //a[begin] >= a[mid]
	{
		if (a[mid] > a[end])
			return mid;
		else if (a[begin] < a[end]) //a[mid] <= a[end]
			return begin;
		else
			return end;
	}
}
//挖坑法
int DigHoleMethod(int *a, int begin, int end)
{
	int keyindex = GetMidIndex(a, begin, end);
	int key = a[keyindex];
	//三数取中之后记得把所取到的key的位置与end位置交换
	swap(a[keyindex], a[end]);
	//int key = a[end];
	//begin == end的情况下就不用比较了
	while (begin < end)
	{
		while (begin < end && a[begin] <= key)
			++begin;
		a[end] = a[begin];
		while (begin < end && a[end] >= key)
			--end;
		a[begin] = a[end];
	}
	a[begin] = key;
	return begin;
}
void _QuickSort(int *a, int begin, int end)
{
	if (begin >= end)
		return;//注意递归终止条件
	int keyindex = DigHoleMethod(a, begin, end);
	_QuickSort(a, begin, keyindex - 1);
	_QuickSort(a, keyindex + 1, end);
}
//当数据量过大的时候,递归方法的快排可能导致堆栈溢出
//因此需要非递归方法
//使用栈来模拟递归过程
void _NonQuickSort(int *a, int begin, int end)
{
	stack<int> s;
	s.push(begin);
	s.push(end);
	while (!s.empty())
	{
		int right = s.top();
		s.pop();
		int left = s.top();
		s.pop();

		int keyindex = DigHoleMethod(a, left, right);

		if (left < keyindex - 1)
		{
			s.push(left);
			s.push(keyindex - 1);
		}	
		if (keyindex + 1 < right)
		{
			s.push(keyindex + 1);
			s.push(right);
		}	
	}
}

void Quicksort(int *a, int n)
{
	_QuickSort(a, 0, n - 1);
	//_NonQuickSort(a, 0, n - 1);
}

void _MergeSort(int *a, int begin, int end, int *tmp)
{
	if (begin >= end)
		return;
	int keyindex = (begin + end) >> 1;

	_MergeSort(a, begin, keyindex, tmp);
	_MergeSort(a, keyindex + 1, end, tmp);

	int i = begin;
	int left1 = begin, end1 = keyindex;
	int left2 = keyindex + 1, end2 = end;
	
	while (left1 <= end1 && left2 <= end2)
	{
		if (a[left1] < a[left2])
			tmp[i++] = a[left1++];
		else
			tmp[i++] = a[left2++];
	}

	if (left1 <= end1)
	{
		while (left1 <= end1)
			tmp[i++] = a[left1++];
	}
	if (left2 <= end2)
	{
		while (left2 <= end2)
			tmp[i++] = a[left2++];
	}
	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}
void MergeSort(int *a, int n)
{
	int *tmp = new int[n];
	_MergeSort(a, 0, n - 1, tmp);
}

int main()
{
	//int a[] = { 3, 3, 2, 5, 7, 9, 8, 6, 1, 5 };
	int a[] = { 3, 3, 2, 5, 7, 9, 8, 6, 1, 5 };

	int n = sizeof(a) / sizeof(a[0]);

	//Quicksort(a, n);
	MergeSort(a, n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}