#include <iostream>
#include <sstream>

using namespace std;

void T1()
{
	//ostringstream st;

	stringstream ss;
	//string s;
	float s;

	ss << 1.23;

	ss >> s;

	cout << s;

	//cout << ss.str();

	//st << "hello world!";
	//cout << st.str() << endl;
}


int main1()
{
	T1();

	system("pause");
	return 0;
}