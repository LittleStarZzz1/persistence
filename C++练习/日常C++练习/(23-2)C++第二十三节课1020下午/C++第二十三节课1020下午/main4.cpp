#include <iostream>
#include <fstream>


using namespace std;

//main��������

//mian�������Դ���������, (��������, ��Щ����, ��������)
int main4(int argc, const char * argv[])
{
	//int i;
	//
	//for (i = 0; i < argc; i++)
	//{
	//	cout << argv[i];
	//}

	if (argc != 3)
	{
		return -1;
	}


	ifstream ifs(argv[1], ifstream::binary);
	ofstream ofs(argv[2], ofstream::binary);

	//char c;
	char c[1024];

	while (!ifs.eof())
	{
		//ifs >> c;
		ifs.read(c, 1024);
		
		//ofs << c;
		//ofs.write(c. 1024);
	}


	ifs.close();
	ofs.close();



	system("pause");
	return 0;
}