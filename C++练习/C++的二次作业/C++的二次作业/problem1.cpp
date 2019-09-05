#include <iostream>

using namespace std;

//使用宏完成交换
#define swap1(a,b) {a = a + b; b = a - b; a = a - b;}

//使用引用完成交换
void swap(int & a, int & b){
	int tmp = a;
	a = b;
	b = tmp;
}

int main1(){
	int a = 10;
	int b = 20;
	//swap(a, b);
	swap1(a, b);

	cout << a << endl;
	cout << b << endl;
	system("pause");
	return 0;
}