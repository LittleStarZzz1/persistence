#include <iostream>

using namespace std;

class Base {
private:
	int _b = 1;

public:    
	virtual void Func1()    
	{ 
		cout << "Func1()" << endl; 
	}

};



int main3()
{

	cout << sizeof(Base) << endl;

	system("pause");
	return 0;
}