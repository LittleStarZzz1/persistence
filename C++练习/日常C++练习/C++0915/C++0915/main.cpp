#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int main_()
{
	string s1;
	char str[1000] = { 0 };

	scanf("%[^\n]", str);	//���� \n �ͽ���  (������ʽ)
	
	//scanf("%[0-9]", str);	//ɸѡ0-9
	
	//fgets(str, 1000, stdin);

	//cin.getline(str, 10);
	//getline(cin, s1);

	//cout << str;
	//cin >> s1;
	
	//scanf("%[0-9]", str);

	cout << str;



	system("pause");
	return 0;
}