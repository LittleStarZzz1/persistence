#include <iostream>
#include <vector>
#include <map>

using namespace std;

//�б��ʼ��������{}ǰʹ��=��, ��Ч���벻����=��û������
int main()
{
	//��̬����, C++98�в�֧��
	int * a = new int[5]{ 1, 2, 3, 4, 5 };

	//��׼����
	vector<int> v{ 1, 2, 3, 4, 5 };
	map<int, int> m{ { 1, 2 }, { 3, 4 }, { 5, 6 } };
	

	system("pause");
	return 0;
}