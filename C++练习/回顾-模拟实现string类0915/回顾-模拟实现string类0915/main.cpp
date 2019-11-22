#include "String.h"

int main()
{
	//String s("nihao");
	String s(4, 'n');
	String s1("nihao");
	s = s1;

	String s4("nihaoa");


	cout << (s < s4) << endl;

	String::iterator it = s.begin();

	for (; it != s.end(); ++it)
	{
		cout << *it;
	}

	cout << endl;


	system("pause");
	return 0;
}
