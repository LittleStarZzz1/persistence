#include <iostream>
#include <cstring>

using namespace std;

struct student{
	char name[32];
	int age;
	int classid;
	bool sex;
};

// "caxukun", 18, 1, t
// "qiaobiluo", 19, 1, false
// "wuyifan", 20, 2, true
// "luhan", 22, 2, true
// "lubenwei", 22, 2, true
// "yangchaoyue", 20, 1, false
// "caixukun", 18, 1, true

bool cmpEqlAge(student a, student b){
	return a.age == b.age;
}

int countS(student * st, int n, student value, bool (*cmp)(student, student) = cmpEqlAge){
	int i;
	int count = 0;

	for (i = 0; i < n; ++i){
		if (cmp(st[i], value)){
			count++;
		}
	}
	return count;
}

bool cmpEqlname(student a, student b){
	return strcmp(a.name, b.name) ? false : true;
}

bool cmpEqlSex(student a, student b){
	//return a.sex == b.sex;
	return !(a.sex ^ b.sex);
}


int main1(){

	student st[] = { { "caixukun", 18, 1, true },
	{ "qiaobiluo", 19, 1, false },
	{ "wuyifan", 20, 2, true },
	{ "luhan", 22, 2, true },
	{ "lubenwei", 22, 2, true },
	{ "yangchaoyue", 20, 1, false },
	{ "caixukun", 18, 1, true } };
	
	student test = { "caixukun", 18, 1, true };

	cout << countS(st, 7, test) << endl;
	
	
	system("pause"); 
	return 0;		
}					