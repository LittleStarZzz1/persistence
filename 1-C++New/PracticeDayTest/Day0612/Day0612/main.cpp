#include <iostream>


//һ�������Ķ��������Ӹ��ڵ�һ��һ���������һ�α�ţ����ڵ���Ϊ1�������������a��b���ҳ�a��b�������������
class LCA {
public:
	int getLCA(int a, int b) {
		// write code here
		while (a >= 0 && b >= 0)
		{
			//��Ŵ��������
			if (a > b)
				a /= 2;
			else if (a < b)
				b /= 2;
			else
				return a;
		}
		return -1;
	}
};

int main()
{

	return 0;
}


