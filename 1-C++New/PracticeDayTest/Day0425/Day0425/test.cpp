#include <iostream>

using namespace std;

class A
{
public:
	A(int val = 10) :
		_a(val)
	{
		cout << "A()" << endl;
	}


	~A()
	{
		cout << "~A()" << endl;
	}

private:
	int _a;
};

int main()
{
	// malloc���ٿռ�ʧ�ܷ���0(NULL)
	// operator new ���ٿռ�ʧ�ܺ�����쳣
	// new 1. ���ٿռ�, �����Զ������͹��캯����ʼ��; 2. ���ٿռ�ʧ�����쳣

	//size_t size = 2;
	//A* p1 = (A*)malloc(1024 * 1024 * 1024 * size);
	//cout << p1 << endl; // malloc ����ʧ�ܷ���0
	//try
	//{
	//	A* p2 = (A*)operator new(1024 * 1024 * 1024 * size);// operator new ���ٿռ�ʧ�����쳣
	//	cout << p2 << endl;
	//}
	//catch (exception& e)
	//{
	//	cout << e.what() << endl;
	//}

	//��λ new ���ʽ

	A* p1 = new A;
	delete p1;

	//ģ������ʵ�ֹ���, �õ� ��λ new ���ʽ
	A* p2 = (A*)operator new(sizeof(A));
	new(p2)A(10); //���ѿ��ٵĿռ�����ʾ�����Զ������͵Ĺ��캯��
	p2->~A; //��ʾ������������

	operator delete(p2); //�ͷſռ�

	system("pause");
	return 0;
}