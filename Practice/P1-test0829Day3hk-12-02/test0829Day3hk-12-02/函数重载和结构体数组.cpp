#include <iostream>

using namespace std;

struct Student
{
	char m_name[32];
	int m_age;
	int m_classid;
	bool m_sex;
};

bool cmpEql(Student a, Student b)
{
	return a.m_age == b.m_age;
}

int CountNumber(Student * st, int n, Student val, bool (*cmp)(Student, Student) = cmpEql)
{
	int i;
	int count = 0;

	for (i = 0; i < n; ++i)
	{
		if (cmp(st[i], val))
		{
			count++;
		}
	}
	
	return count;
}

bool cmpEqlName(Student a, Student b)
{
	return strcmp(a.m_name, b.m_name) ? false : true;
}

bool cmpEqlSex(Student a, Student b)
{
	return !(a.m_sex ^ b.m_sex);
}

bool cmpEqlClassid(Student a, Student b)
{
	return a.m_classid == b.m_classid;
}

int main()
{
	Student s[] = { {"xiaoming", 18, 1, true},
	                { "Mary", 20, 2, false }, 
	                {"Jack", 20, 2, true},
	                {"Allen", 30, 1, true},
	                {"Curry", 31, 2, true},
	                {"Red", 18, 1, false} 
	};

	Student test = { "xiaoming", 18, 1, true };

	cout << CountNumber(s, 6, test, cmpEqlClassid) << endl;
	cout << CountNumber(s, 6, test, cmpEqlName) << endl;
	cout << CountNumber(s, 6, test, cmpEqlSex) << endl;
	cout << CountNumber(s, 6, test) << endl;//比较规则为缺省参数,不传默认比较年龄

	system("pause");
	return 0;
}