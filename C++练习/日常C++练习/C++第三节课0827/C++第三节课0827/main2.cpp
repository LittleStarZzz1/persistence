#include <iostream>
#include <vector>

using namespace std;

int main1(){

	int arr[] = { 2, 5, 1, 3, 4 };

	vector <int> v;	//容器,范围for也可以完成容器遍历

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);

	for (auto & i : arr){
		i *= 2;
	}

	//for (auto i : arr){
	//	i *= 2;
	//}
	for (auto i : arr){
		cout << i << endl;
	}

	for (auto i : v){
		cout << i << endl;
	}

	system("pause");
	return 0;
}