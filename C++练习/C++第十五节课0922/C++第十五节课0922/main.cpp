#include <iostream>
#include <vector>

using namespace std;



int main1()
{
	vector<int> v;
	for (int i = 1; i <= 10; ++i)
	{
		v.push_back(i);
	}
	
#if 0	//insert 1
	
	v.insert(v.begin() + 5, 20);



#elif 0
	v.insert(v.begin() + 5, 3, 20);

#else
	int a[5] = { 10, 20, 30, 40, 50 };
	//v.insert(v.begin() + 5, v.begin(), v.end());
	v.insert(v.begin() + 5, a + 1, a + 3);

#endif

#if 0	// erase
	v.erase(v.begin() + 5);
#elif 0
	v.erase(v.begin() + 5, v.end() - 3);


#elif 1
	vector<int> v2;

	for (int i = 1; i <= 10; ++i)
	{
		v2.push_back(i);
	}

	v.swap(v2);	//swap 交换两个容器的值

	vector<int>::iterator iv = v.begin() + 5;

	cout << *iv << endl;

	//v.insert(v.begin() + 5, 20);
	iv = v.insert(iv, 20);

	cout << *iv << endl;

	for (auto & i : v)
	{
		cout << i << ' ';
	}

#endif
	system("pause");
	return 0;
}