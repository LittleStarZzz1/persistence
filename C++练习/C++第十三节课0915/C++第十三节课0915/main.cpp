#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1("Hello World!");
	string s2("aasfsfdsfsdgdsfwwsafkshjfk");
	
	//cout << s1.find('e') << endl;
	cout << s2.find('s', 3) << endl;	//从pos位置往后找, pos = 0为缺省参数

	
	cout << s1.size() << endl;
	cout << s1.rfind('W') << endl;		////从pos位置往前找, pos = n为缺省参数

	cout << s1.substr(2, 11) << endl;




	system("pause");
	return 0;
}