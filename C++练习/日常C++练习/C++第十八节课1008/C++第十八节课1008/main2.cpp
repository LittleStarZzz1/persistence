#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int main2()
{
	vector<int> v{ 1, 4, 2, 5, 7, 3, 8, 10 };

	priority_queue<int> q1;

	vector<int> v2;

	for (auto & i : v)
	{
		q1.push(i);
	}

	while (!q1.empty())
	{
		v2.push_back(q1.top());
		q1.pop();
	}

	for (auto & i : v2)
	{
		cout << i << endl;
	}




	system("pause");
	return 0;
}
