#include <iostream>
#include <cstring>

using namespace std;

struct student {
	char name[32];
	int age;
	int classid;
	bool sex;
};

//写出函数,用函数重载的方式编写程序,统计出一个以上述结构为基准的结构体数组中:
//1. 名字为X的出现了多少次
//2. 年龄为X的出现了多少次
//3. 班级为X的出现了多少次
//4. 性别为X的出现了多少次

bool cmpEql(student a, student b){
	return a.age == b.age;
}

int countS(student * st, int n, student value, bool(*cmp)(student, student) = cmpEql){
	int i;
	int count = 0;
	for (i = 0; i < n; ++i){
		if (cmp(st[i], value)){
			++count;
		}
	}
	return count;
}

bool cmpEqlName(student a, student b){
	return strcmp(a.name, b.name) ? false : true;
}

bool cmpEqlSex(student a, student b){
	//return a.sex == b.sex;
	return !(a.sex ^ b.sex);
}

// "caxukun", 18, 1, t
// "qiaobiluo", 19, 1, false
// "wuyifan", 20, 2, true
// "luhan", 22, 2, true
// "lubenwei", 22, 2, true
// "yangchaoyue", 20, 1, false
// "caixukun", 18, 1, true

int main1(){
	student st[] = { { "caixukun", 18, 1, true },
	{ "qiaobiluo", 19, 1, false },
	{ "wuyifan", 20, 2, true },
	{ "luhan", 22, 2, true },
	{ "lubenwei", 22, 2, true },
	{ "yangchaoyue", 20, 1, false },
	{ "caixukun", 18, 1, true } };

	student test = { "caixukun", 18, 1, true };

	//cout << countS(st, 7, test) << endl;
	//cout << countS(st, 7, test, cmpEqlSex) << endl;
	cout << countS(st, 7, test, cmpEqlName) << endl;

	system("pause");
	return 0;
}