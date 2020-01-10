#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 10;
	x = y = ++y;

	printf("%d %d", x, y);


	system("pause");
	return 0;
}