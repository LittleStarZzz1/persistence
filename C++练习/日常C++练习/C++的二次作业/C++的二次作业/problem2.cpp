#include <iostream>

using namespace std;

//��һ���ַ���ת��Ϊ����,����ֵ����У��ת���Ƿ�ɹ� 
bool strtoi(const char * src, int & res){
	while (*src == ' '){	//�����ַ����еĿո�
		src++;
	}
	
	int flag = 1;
	if (*src == '-'){
		flag = -1;
		src++;
	}

	if (*src > '9' || *src < '0'){
		return false;
	}

	int sum = 0;
	int i, tmp;
	for (i = 0; src[i] && (src[i] <= '9' && src[i] >= '0'); ++i){
		tmp = src[i] - '0';
		sum = sum * 10 + tmp;
	}
	res = sum * flag;

	return true;

}
int main2(){
	int res;
	if (strtoi("\n\n\n\n\n\a\t\t\b\b     -478a193", res)){
		cout << res << endl;
	}
	else {
		cout << "fail\n";
	}
	system("pause");
	return 0;;
}