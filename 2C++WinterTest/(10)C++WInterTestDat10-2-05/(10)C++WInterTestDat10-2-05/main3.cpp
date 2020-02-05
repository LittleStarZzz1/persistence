#include <iostream>

using namespace std;

struct HAR
{
	int x, y;
	struct HAR *p;
}h[2];

int main3()
{
	h[0].x = 1;
	h[0].y = 2;
	h[1].x = 3;
	h[1].y = 4;
	h[0].p = &h[1];
	h[1].p = h;
	cout << (h[0].p)->x << (h[1].p)->y << endl;

	system("pause");
	return 0;
}