#include <iostream>
#include <string>
#include <cstdio>
#include <typeinfo>


using namespace std;




int main4()
{
	string s1("Hello");

	s1.resize(9);
	s1.push_back('a');

	cout << typeid(s1).name() << endl;
	cout << typeid(s1.c_str()).name() << endl;

	cout << s1.c_str() << endl;	//·µ»ØC¸ñÊ½×Ö·û´®

	for (size_t i = 0; i < s1.size(); ++i)
	{
		cout << s1[i];
	}
	cout << endl;

	for (auto i = s1.begin(); i != s1.end(); ++i)
	{
		cout << *i;
	}
	cout << endl;

	for (auto & i : s1)
	{
		cout << i;
	}
	cout << endl << s1 << endl;
	system("pause");
	return 0;
}


int main()
{
	string s1;

	//s1.append("abc");
	//s1.append("def");
	//s1.append("ghi");

	s1 += "abc";
	s1 += "de\nf";
	s1 += "ghi";

	s1.append(2, 'c');



	system("pause");
	return 0;
}


