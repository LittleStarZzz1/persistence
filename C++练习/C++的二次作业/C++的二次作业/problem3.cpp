#include <iostream>

using namespace std;

//��һ������ͨ��ָ�����ư�λ����ֱ�Ӹ���ԭ����
void sysReverse(int & num, int hex){
	int i;
	int tmp;
	int sum = 0;
	for (i = num; i; i /= hex){
		tmp = i % hex;
		sum = sum * hex + tmp;
	}
	num = sum;
}

int main(){
	int num = 25;
	sysReverse(num, 2);

	cout << num << endl;
	system("pause");
	return 0;
}