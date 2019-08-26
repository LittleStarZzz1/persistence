#include <iostream>

using namespace std;

/*
int & Add(int a, int b){
	int c = a + b;
	return c;
}

int main(){
	int & ret = Add(1, 2);
	Add(3, 4);
	cout << "Add(1, 2) is :" << ret << endl;
	system("pause");
	return 0;
}
*/

//int test1(int &a){
//	return a;
//}
//
//int test2(int &b){
//	return b;
//}


struct A {
	int a[10000];
};

void test1(A & a){

}

void test2(A  a){

}

int _main(){
	//int a = 5;

	//cout << test1(a) << endl;
	//cout << test2(a) << endl;

	A a;
	for (int i = 0; i < 100000; ++i){
		test1(a);
	}

	system("pause");
	return 0;
}