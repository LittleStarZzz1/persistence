#include <iostream>

using namespace std;

//���һ����, ����ֻ���ڶ��ϴ�������
//1. ���캯��˽��
//2. ���еľ�̬��Ա����, �ں�����new
class HeapOnly
{
	int m_a;

	HeapOnly() :
		m_a(0)
	{

	}
public:
	static HeapOnly * CreateObject()
	{
		return new HeapOnly;
	}


};

int main()
{
	//HeapOnly hp;
	HeapOnly::CreateObject();

	system("pause");
	return 0;
}