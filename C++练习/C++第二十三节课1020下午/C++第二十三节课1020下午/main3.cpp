#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void filetest()
{
	//ofstream ofs("1.txt");
	ifstream ifs("1.txt");

	char str[255];

	//ofs << "hello world!" << endl;
	ifs.getline(str, 15);
	cout << str;
	

	//ofs.close();
	ifs.close();
}

int main3()
{
	filetest();

	system("pause");
	return 0;
}