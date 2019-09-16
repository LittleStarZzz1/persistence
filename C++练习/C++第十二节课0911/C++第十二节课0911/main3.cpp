#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main3()
{
	string s1;	//定义了一个名叫s1的字符串容器
	string s2("caixukun");
	string s3 = s2;
	string s4(5, '6');

	//s1.reserve(500);
	//cout << s1.capacity() << endl;	//511    500之后16的倍数 - 1(16 * 32 - 1)

	s1.push_back('1');
	cout << s1.size() << endl;

	s1.resize(100, 'n');
	cout << s1.size() << endl;

	s1.push_back('2');
	cout << s1 << endl;

	s1.resize(6);
	s1.push_back('3');

	cout << s1 << endl;

	//s1.clear();
	//cout << s1.capacity() << endl;
	//cout << s1.size() << endl;

	//string::iterator i;	//迭代器
	//for (i = s1.begin(); i != s1.end(); ++i)		//容器遍历
	//{
	//	cout << *i;
	//}

	for (auto & i : s1)
	{
		cout << i;
	}


	//for (auto & i : s1)
	//{
	//	printf("%d ", i);
	//}


	//cout << s1 << endl
	//	 << s2 << endl
	//	 << s3 << endl
	//	 << s4 << endl;

	//cout << s1.size() << endl
	//	 << s2.size() << endl
	//	 << s3.size() << endl
	//	 << s4.size() << endl;

	//cout << s1.length() << endl
	//	 << s2.length() << endl
	//	 << s3.length() << endl
	//	 << s4.length() << endl;

	//s4 += s3;	//相当于strcat
	//s4 += "qiaolaoshi";
	//s4 += "zhangyixing";

	//cout << s1 << endl
	//	 << s2 << endl
	//	 << s3 << endl
	//	 << s4 << endl;

	//cout << s1.size() << endl
	//	 << s2.size() << endl
	//	 << s3.size() << endl
	//	 << s4.size() << endl;
	//	
	//cout << s1.capacity() << endl
	//	 << s2.capacity() << endl
	//	 << s3.capacity() << endl
	//	 << s4.capacity() << endl;

	//cout << s4.empty() << endl;	// empty 判空		非空返回0
	//s4.clear();
	//cout << s4.empty() << endl;	//为空返回1
	//cout << s4.size() << endl;


	system("pause");
	return 0;
}