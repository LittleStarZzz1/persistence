#include <iostream>

using namespace std;

int main()
{
	int num1[10] = { 1, 2, 3, 4 };    
	char char2[] = "abcd";    
	char* pChar3 = "abcd";    
	int* ptr1 = (int*)malloc(sizeof(int) * 4);    
	int* ptr2 = (int*)calloc(4, sizeof(int));    
	int* ptr3 = (int*)realloc(ptr2, sizeof(int)* 4);

	free(ptr1);
	free(ptr3);

	cout << sizeof(num1) << endl;
	cout << sizeof(char2) << ' ' << strlen(char2) << endl;
	cout << sizeof(pChar3) << ' ' << strlen(pChar3) << endl;
	cout << sizeof(ptr1) << endl;

	//free(ptr1);

	system("pause");
	return 0;
}