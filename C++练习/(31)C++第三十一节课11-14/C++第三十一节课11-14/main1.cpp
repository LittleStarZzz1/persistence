#include <iostream>
#include <map>
#include <set>
#include <functional>

using namespace std;

int main1()
{
	int a[5] = { 5, 2, 3, 1, 4 };
	
	set<int> s(a, a + 5);	//����ʹ�������ŷ���

	s.insert(6);

	for (auto & i : s)
	{
		cout << i << ' ';
	}




	system("pause");
	return 0;
}