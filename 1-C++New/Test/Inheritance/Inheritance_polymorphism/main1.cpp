#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	void Print()
	{
		cout << _name << endl;
		cout << _age << endl;
	}
protected:
	string _name = "Person";
	int _age = 18;
};

class Teacher : public Person
{
protected:
	string _name = "Person";
	int _age = 18;
	int _workid = 66666;
};

class Student : public Person
{
protected:
	string _name = "Person";
	int _age = 18;
	int _id = 123456;
};

int main1()
{
	Person p;
	Student s;
	Teacher t;

	p.Print();
	t.Print();
	s.Print();

	system("pause");
	return 0;
}