#include <iostream>
#include <typeinfo>

using namespace std;


//模板优先级较低.
template <class T> 
void swapArgs(T &a, T &b)
{
	T tmp;

	cout << typeid(tmp).name() << endl;

	tmp = a;
	a = b;
	b = tmp;
}
//允许函数重载, 重载的时候有int相关的就选择int相关, 没有就选择模板
void swapArgs(int & a, int & b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}



template <typename T>
int findArgs(T * src, size_t n, T f)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		if (src[i] == f)
		{
			return i;
		}
	}
	return -1;
}


template <typename T>
T add(T a, T b){
	return a + b;
}




int main1()
{
	//int ia = 5, ib = 7;
	//double da = 3.14, db = 1.618;

	//swapArgs(ia, ib);
	//cout << ia << ' ' << ib << endl;

	//swapArgs(da, db);
	//cout << da << ' ' << db << endl;

		
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7 };

	//cout << findArgs(arr, 7, 5) << endl;


	cout << add(2, 5) << endl;


	system("pause");
	return 0;
}