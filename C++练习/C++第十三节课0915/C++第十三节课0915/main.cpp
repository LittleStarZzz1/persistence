#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1("Hello World!");
	string s2("aasfsfdsfsdgdsfwwsafkshjfk");
	
	//cout << s1.find('e') << endl;
	cout << s2.find('s', 3) << endl;	//��posλ��������, pos = 0Ϊȱʡ����

	
	cout << s1.size() << endl;
	cout << s1.rfind('W') << endl;		////��posλ����ǰ��, pos = nΪȱʡ����

	cout << s1.substr(2, 11) << endl;




	system("pause");
	return 0;
}