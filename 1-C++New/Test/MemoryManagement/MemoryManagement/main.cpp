#include <iostream>

using namespace std;

void test()
{
	//��̬����һ��int���͵Ŀռ�
	int* pi = new int;//����һ��4�ֽ����Ϳռ�

	//��̬����һ��int���͵Ŀռ䲢��ʼ��
	int* pi2 = new int(2);//����һ��4�ֽ����Ϳռ䲢��ֵΪ2

	//��̬����int���͵�����
	int* pi3 = new int[5];//������һ������Ϊ5����������

	//int* pi4 = new int[5](1);

	delete pi;
	delete pi2;
	delete[] pi3;
}

class A
{
public:
	A(int x = 10) :
		_val(x)
	{
		cout << "A()" << endl;
	}

	~A()
	{
		cout << "~A()" << endl;
	}

	int getVal()
	{
		return _val;
	}
private:
	int _val;
};

//void test1()
//{
	//A* pA_CPP = new A;//���뵥��A���͵Ķ���
	//cout << pA_CPP << endl;
	//cout << pA_CPP->getVal() << endl;
	//delete pA_CPP;//�ͷŵ���Ƭ�ռ�

//	A* pA_CPP_ARR = new A[10];
//	delete[] pA_CPP_ARR;
//}

void test2()
{
	//A* pA_C = (A*)malloc(sizeof(A));
	//cout << pA_C << endl;
	//cout << pA_C->getVal() << endl;
	//free(pA_C);

	A* pA_C_ARR = (A*)malloc(sizeof(A)* 10);
	free(pA_C_ARR);
}

int main()
{
	//test1();
	test2();

	system("pause");
	return 0;
}