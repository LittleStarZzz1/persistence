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

	//l2.swap(l4); //��������list��ֵ
	//l2.sort();	//����
	//l2.merge(l4);	//��������������ϳ�һ���µ���������, ���ϳɵ�����(��Ϊ��������������)�ᱻ���.

	cout << l4.back();

	system("pause");
	return 0;
}