#include <iostream>
#include <vector>

using namespace std;

int main2()
{
	vector<int> v;

	v.push_back(1);

	vector<int>::iterator iv = v.begin();
	iv = v.insert(iv, 10, 6);	//

	cout << iv - v.begin() << endl;

	for (auto & i : v)
	{
		cout << i << ' ';
	}

	system("pause");
	return 0;
}