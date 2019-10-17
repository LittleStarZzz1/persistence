#pragma once

#include <stack>

namespace wf{

	template < class T >
	class TreeNode
	{
		T m_val;

		TreeNode<T> * m_left;
		TreeNode<T> * m_right;
	public:
		TreeNode(const T &val) :
			m_val(val)
		{

		}

		template <class T>
		friend class Tree;
	};

	template <class T>
	class Tree
	{
		TreeNode<T> * m_root;

		static TreeNode<T> *  maketree(const T * val, const T & end, int &i)
		{
			if (val[i] == end)
			{
				i++;
				return nullptr;
			}

			TreeNode<T> * root = new TreeNode<T>(val[i]);
			i++;

			root->m_left = maketree(val, end, i);
			root->m_right = maketree(val, end, i);

			return root;
		}
	public:
		Tree() :
			m_root(nullptr)
		{

		}

		Tree(const T * val, const T & end)
		{
			int i = 0;
			m_root = maketree(val, end, i);
		}
	};
}