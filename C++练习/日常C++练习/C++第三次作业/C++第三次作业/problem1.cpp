#include <iostream>

using namespace std;

//ʹ�÷�Χfor��ͨ������Ϊһ�����鸳ֵ

int main1(){
	int arr[10] = { 0 };
	for (auto & i : arr){
		cin >> i;
	}

	for (auto i : arr){
		cout << i << endl;
	}

	system("pause");
	return 0;
}