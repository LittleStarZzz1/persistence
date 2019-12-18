#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	//unordered_map 不会自动排序
	unordered_map<int, int> um;
	um.insert(pair<int, int>(2, 5));

	um[3] = 6;
	um[4] = 7;
	um[30] = 18;
	um[5] = 9;

	for (auto & e : um)
	{
		cout << e.first << ' ' << e.second << endl;
	}

	unordered_map<int, int>::reverse_iterator rit;

	for (rit = um.rbegin(); rit != um.rend(); ++rit)
	{
		cout << rit->first << ' ' << rit->second << endl;
	}

	cout << um.size() << endl;



	system("pause");
	return 0;
}