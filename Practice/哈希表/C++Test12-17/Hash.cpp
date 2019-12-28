#include "HashTable.h"

int main2()
{
	sy::hashTable<int, int> ht;

	ht.insert(pair<int, int>(1, 5));
	ht.insert(pair<int, int>(2, 7));
	ht.insert(pair<int, int>(5, 6));
	ht.insert(pair<int, int>(6, 8));
	ht.insert(pair<int, int>(12, 9));
	ht.insert(pair<int, int>(16, 4));

	ht.erase(16);
	ht.erase(12);

	ht.insert(pair<int, int>(23, 11));
	ht.insert(pair<int, int>(27, 13));


	system("pause");
	return 0;
}

int main()
{
	sy::hashTable<string, int, sy::dealString> ht;

	ht.insert(pair<string, int>("abc", 5));
	ht.insert(pair<string, int>("def", 7));
	ht.insert(pair<string, int>("ghi", 6));
	ht.insert(pair<string, int>("jkl", 8));


	system("pause");
	return 0;
}
