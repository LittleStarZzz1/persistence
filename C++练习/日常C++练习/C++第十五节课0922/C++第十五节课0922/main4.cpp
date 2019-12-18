#include <iostream>
#include <vector>

using namespace std;

void printArray(const vector<int> & v, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << ' ';
	}
	cout << endl;
	//for (auto & i : v)
	//{
	//	cout << i << ' ';
	//}
	//cout << endl;
}

//一维数组版打印杨辉三角
void printGenerate(int n)
{
	vector<int> v(n, 0);
	v[0] = 1;	//设置引子
	printArray(v, 1);

	int i, j;

	for (i = 1; i < n; ++i)
	{
		for (j = i; j > 0; --j)
		{
			v[j] += v[j - 1];
		}
		printArray(v, i + 1);
	}
}

//二维数组打印杨辉三角
vector<vector<int>> generate(int numRows)
{
	vector<vector<int>> data(numRows);
	if (numRows == 0)
	{
		return data;
	}

	int i, j;
	data[0].push_back(1);
	for (i = 1; i < numRows; ++i)
	{
		data[i] = data[i - 1];	//将上一行拷贝过来
		for (j = i - 1; j > 0; --j)
		{
			data[i][j] += data[i][j - 1];
		}
		data[i].push_back(1);
	}
	return data;

}



int main4()
{
	vector<vector<int>> data = generate(10);
	for (auto i : data)
	{
		for (auto j : i)
		{
			cout << j << ' ';
		}
		cout << endl;
	}



	//printGenerate(10);

	//vector<vector<int>> data(10);

	//data[0].push_back(3);

	//for (int i = 1; i <= 10; ++i)
	//{
	//	data[i].push_back(3);
	//}


	system("pause");
	return 0;
}