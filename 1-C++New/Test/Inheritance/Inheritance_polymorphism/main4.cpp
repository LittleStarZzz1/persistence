#include <iostream>

using namespace std;

class Student;
class Person
{
public:
	friend void _friendFunc(const Person& p, const Student& s);//��Ԫ����
private:
	char _name;
};

class Student : public Person
{
protected:
	int _id;
};

void _friendFunc(const Person& p, const Student& s)
{
	cout << p._name << endl;
	//cout << s._id << endl;
}



int main4()
{


	return 0;
}


//class Student; 
//class Person {
//public:    
//	friend void Display(const Person& p, const Student& s); 
//protected:    
//	char _name; // ���� 
//}; 
//class Student : public Person 
//{ 
//protected:    
//	int _stuNum; // ѧ�� 
//};
//
//		   
//void Display(const Person& p, const Student& s) 
//{ 
//	cout << p._name << endl;    
//	cout << s._stuNum << endl; 
//}
//
//void main() 
//{ 
//	Person p;    
//	Student s;    
//	Display(p, s);
//}