#include <iostream>
#include <vector>
#include "Vector.h"

void testVector_construct()
{
	yx::Vector<int> v;
	
	//push_back≤‚ ‘
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);

	for (size_t i = 0; i < v.size(); ++i)//operator []≤‚ ‘
	{
		std::cout << v[i] << ' ';
	}
	std::cout << std::endl;

	v.resize(5);//resize≤‚ ‘

	for (size_t i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << ' ';
	}
	std::cout << std::endl;


}

void testVector_insert()
{
	yx::Vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for (size_t i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << ' ';
	}
	std::cout << std::endl;

	//v.insert(v.begin(), 5);
	v.insert(v.end() - 2, 5);


	for (size_t i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << ' ';
	}
	std::cout << std::endl;
}

void testVector_erase()
{
	yx::Vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(4);

	yx::Vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		if (*it == 3)
		{
			it = v.erase(it);
			*it = 30;
		}
			
		else
		{
			++it;
		}

	}

	for (size_t i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << ' ';
	}
	std::cout << std::endl;
}

void testVector_erase_std()
{
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(4);

	std::vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		if (*it == 3)
		{
			it = v.erase(it);
			*it = 30;
		}

		else
		{
			++it;
		}

	}

	for (size_t i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << ' ';
	}
	std::cout << std::endl;
}

int main()
{
	//testVector_construct();
	//testVector_insert();
	testVector_erase();
	//testVector_erase_std();

	system("pause");
	return 0;
}