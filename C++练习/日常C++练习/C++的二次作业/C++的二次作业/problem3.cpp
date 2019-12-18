#include <iostream>

using namespace std;

//将一个数字通过指定进制按位逆序（直接覆盖原数）
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