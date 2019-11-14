#include <iostream>
#include <map>

using namespace std;

class Test
{
public:
	int m_a;

	Test(int a = 0) :
		m_a(a)
	{

	}

	bool operator > (const Test & t) const
	{
		return m_a > t.m_a;
	}

	bool operator < (const Test & t) const
	{
		return m_a < t.m_a;
	}

	bool operator != (const Test & t) const
	{
		return m_a != t.m_a;
	}

	bool operator ==(const Test & t) const
	{
		return m_a == t.m_a;
	}

	bool operator >= (const Test & t) const
	{
		return m_a >= t.m_a;
	}

	bool operator <= (const Test & t) const
	{
		return m_a <= t.m_a;
	}

};

int main()
{
	pair<Test, int> p;

	p.first = Test(5);
	p.second = 2;

	map<Test, int> m;

	m.insert(pair<Test, int>(Test(6), 5));
	m.insert(pair<Test, int>(Test(1), 4));
	m.insert(p);
	m.insert(pair<Test, int>(Test(8), 8));
	m.insert(pair<Test, int>(Test(9), 6));
	m.insert(pair<Test, int>(Test(5), 9));
	m.insert(pair<Test, int>(Test(4), 10));

	for (auto & i : m)
	{
		cout << i.first.m_a << ' ' << i.second << endl;
	}

	cout << endl;

	map<Test, int>::iterator its = m.find(4);

	cout << its->first.m_a << ' ' << its->second << endl;



	/*pair<int, int> p;
	p.first = 1;
	p.second = 2;

	map<int, int> m;

	m.insert(pair<int, int>(2, 4));
	m.insert(pair<int, int>(3, 6));

	m.insert(p);
	
	map<int, int>::iterator mi = m.begin();

	for (auto & i : m)
	{
		cout << i.first << ' ' << i.second << endl;
	}

	cout << endl;

	mi++;
	mi++;

	cout << mi->first << ' ' << mi->second << endl;
*/

	system("pause");
	return 0;
}