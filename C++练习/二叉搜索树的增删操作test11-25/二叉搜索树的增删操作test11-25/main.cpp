#include "BinarySortTree.h"

int main()
{
	sy::BinarySortTree<int> bst;

	bst.insert(5);
	bst.insert(2);
	bst.insert(8);
	bst.insert(0);
	bst.insert(1);
	bst.insert(4);
	bst.insert(7);
	bst.insert(9);
	bst.insert(3);
	bst.insert(6);

	bst.erase(7);
	vector<int> v = bst.Inorder();

	for (auto & i : v)
	{
		cout << i << ' ';
	}
	system("pause");
	return 0;
}