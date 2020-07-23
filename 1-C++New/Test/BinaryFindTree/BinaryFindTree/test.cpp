#include <iostream>
#include <string>
#include "BinaryFindTree.h"

using namespace std;

//void testBTree_key()
//{
//	BTree<int> bt;
//	bt.insert(1);
//	bt.insert(5);
//	bt.insert(3);
//	bt.insert(2);
//	bt.insert(0);
//	bt.insert(7);
//	bt.insert(9);
//
//	bt.inorder();

	//BTree<int> t;
//	int a[] = { 5, 3, 4, 1, 7, 8, 2, 6, 0, 9 };
//	for (auto e : a)
//	{
//		t.insert(e);
//	}
//
//	t.inorder();
//
//	t.erase(7);
//	t.inorder();
//
//	for (auto e : a)
//	{
//		t.erase(e);
//		t.inorder();
//	}
//}

//void testBTree_key_val()
//{
//	//BTree<string, int> bt;
//}

void testBTree_key_val()
{
	BTree<string, string> bt;
	bt.insert("sort", "排序");
	bt.insert("string", "字符串");
	bt.insert("tree", "树");
	bt.insert("array", "数组");

	//string str;
	//while (cin >> str)
	//{
	//	BTreeNode<string, string>* ret = bt.Find(str);
	//	if (ret)
	//		cout << ret->_val << endl;
	//	else
	//		cout << "无此单词" << endl;
	//}

	string strArr[] = { "西瓜", "苹果", "西瓜", "苹果", "西瓜", "香蕉", "西瓜", "樱桃", "西瓜", "西瓜" };
	BTree<string, int> bcount;
	for (auto& str : strArr)
	{
		BTreeNode<string, int>* ret = bcount.Find(str);
		if (!ret)
			bcount.insert(str, 1);
		else
			ret->_val++;
	}
	bcount.inorder();

}

int main()
{
	//testBTree_key();
	testBTree_key_val();

	system("pause");
	return 0;
}