#include <iostream>

using namespace std;

//ʹ�ú���ɽ���
#define swap1(a,b) {a = a + b; b = a - b; a = a - b;}

//ʹ��������ɽ���
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