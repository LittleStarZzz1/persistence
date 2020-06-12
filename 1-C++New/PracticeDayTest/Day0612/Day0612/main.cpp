#include <iostream>


//一棵无穷大的二叉树，从根节点一层一层从左往右一次编号，根节点编号为1，给定两个编号a，b，找出a，b的最近公共祖先
class LCA {
public:
	int getLCA(int a, int b) {
		// write code here
		while (a >= 0 && b >= 0)
		{
			//编号大的往上走
			if (a > b)
				a /= 2;
			else if (a < b)
				b /= 2;
			else
				return a;
		}
		return -1;
	}
};

int main()
{

	return 0;
}


