#include <iostream>
#include <vector>
#include <map>

using namespace std;

//列表初始化可以再{}前使用=号, 其效果与不适用=号没有区别
int main()
{
	//动态数组, C++98中不支持
	int * a = new int[5]{ 1, 2, 3, 4, 5 };

	//标准容器
	vector<int> v{ 1, 2, 3, 4, 5 };
	map<int, int> m{ { 1, 2 }, { 3, 4 }, { 5, 6 } };
	

	system("pause");
	return 0;
}