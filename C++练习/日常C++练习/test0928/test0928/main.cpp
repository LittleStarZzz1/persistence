#include <iostream>
#include <list>

using namespace std;


int main1()
{
	list<int> li;
	list<int> l2(4, 6);
	list<int> l3 = l2;

	int arr[] = { 1, 2, 3, 4, 5 };

	list<int> l4(arr, arr + 5);

	list<int>::reverse_iterator rli;

	//for (rli = l4.rbegin(); rli != l4.rend(); ++rli)
	//{
	//	cout << *rli << ' ';
	//}

	//for (auto & i : l4)
	//{
	//	cout << i << ' ';
	//}

	//l2.swap(l4); //交换两个list的值
	//l2.sort();	//排序
	//l2.merge(l4);	//将两个有序链表合成一个新的有序链表, 被合成的链表(作为参数的链表容器)会被清空.

	cout << l4.back();

	system("pause");
	return 0;
}