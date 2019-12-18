#include <iostream>
#include "binaryTree.h"

using namespace std;

int main()
{

	nj::Tree<char> tr("ABD##E##CFH##I##G##", '#');

	tr.pre_order();
	cout << endl;

	tr.in_order();
	cout << endl;

	tr.post_order();
	cout << endl;

	tr.test();
	cout << endl;

	system("pause");
	return 0;
}