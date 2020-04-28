#include <iostream>

using namespace std;

int GetMonthDay(int year, int month)
{
	static int MonthDay[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
	{
		return 29;
	}
	return MonthDay[month];
}

int iConverDateToDay(int year, int month, int day)
{
	int ret = 0;
	for (int i = 1; i < month; ++i)
	{
		ret += GetMonthDay(year, i);
	}
	ret += day;
	return ret;
}

int main()
{
	int year, month, day;
	int ret;
	while (cin >> year >> month >> day)
	{
		ret = iConverDateToDay(year, month, day);
		cout << ret << endl;
	}

	system("pause");
	return 0;
}