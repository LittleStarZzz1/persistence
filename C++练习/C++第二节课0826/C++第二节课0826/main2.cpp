#include <iostream>

using namespace std;

void func1(int &a){
	a = 9;
}
void func(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

int main2(){
	//int ming = 5;
	//int &xiaoming = ming;
	//xiaoming = 6;

	//�����Ǹ�һ�����������,�������ֶ���һ������,���Բ���˭�ӽ���Ͽ���һ��.

	//�����Ǵ���ָ����ɿ�ջ������,�������߱�ָ���ջ��һ���ص�.

	//���õĵײ�ʵ��ʵ����ָ��

	//�ص�:
	//1. �����ڶ���ʱ�����ʼ��
	//2. һ�����������ж������
	//3. һ������һ��������һ������,�Ͳ����� ��������������

	//cout << &ming << endl;
	//cout << &xiaoming << endl;

	//cout << xiaoming << endl;

	//int a = 10;

	
	//func1(a);
	//cout << a << endl;

	//int a = 5, b = 6;
	//func(a, b);

	//printf("%d %d\n", a, b);

	const int a = 10;
	//int &ra = a;	//ע���޷���const int ת��Ϊ int &
	const int & ra = a;
	double b = 3.14;
	const double & rb = b;

	//int &c = 10;	//�þ����ʱ�����, cΪ����
	double d = 0.618;
	//int & rd = d;	//�þ����ʱ�����, ���Ͳ�ͬ(�޷���doubleת��Ϊ int &)


	system("pause");
	return 0;
}