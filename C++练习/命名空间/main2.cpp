#include <iostream>

using namespace std;

//����ֵ�Ĳ����б����������Ͷ�����ͬʱ����,ֻ����һ��
void func(int a, int b, int c);

//�ں����Ĳ����б���,������ڱ���ֵ�Ĳ���
//��������˲���,��ô��ȡ�����ֵ,���û�д���,��ȡ��������ʱ�������ֵ(Ĭ
//��ֵ)
//��Щ��������λ�ڲ����б��β��,���ܴ���
void func(int a, int b = 20, int c = 30){
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}


void swapArgs(int * pa, int * pb){
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
void swapArgs(float * pa, float * pb){
	float tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//C++����������������ͬʱ����,�����ǵĲ����б�����ȫ��ͬ,���·���ֵ��
//���Ͳ�ͬҲ������

int	add(short a, short b){
	cout << "2\n";
	return a + b;
}
//short add(short a, short b){
//	cout << "1\n";
//	return a + b;
//}

//��. ��������
//C++����������������ͬʱ����,�����ǵĲ����б�����ȫ��ͬ,���·���ֵ������
//��ͬҲ������

//ȱʡ����:
//�����Ĳ����б���,������ڱ���ֵ�Ĳ���,��Щ�����߱������ص�:
//1. ��������˲���,��ô��ȡ�����ֵ,���û�д���,��ȡ��������ʱ�������ֵ(
//Ĭ��ֵ).
//2. ��Щ��������λ�ڲ����б��β��,���ܴ���
//3. ����ֵ�Ĳ����б����������Ͷ�����ͬʱ����,ֻ�ܳ���һ��.


int main2(){
	//func();
	func(1);
	func(1, 2);
	func(1, 2, 3);


	int a = 6, b = 8;
	float c = 3.14, d = 0.618;
	
	swapArgs(&a, &b);
	swapArgs(&c, &d);

	cout << a << " " << b << endl;
	cout << c << " " << d << endl;

	//cout << add(1, 3) << endl;
	system("pause");
	return 0;
}




