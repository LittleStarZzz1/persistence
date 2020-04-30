#define _CRT_SECURE_NO_WARNINGS
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

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int year, month, day, count;
		scanf("%d %d %d %d", &year, &month, &day, &count);
		day += count;
		while (day > GetMonthDay(year, month))
		{
			day -= GetMonthDay(year, month);
			++month;
			if (month > 12)
			{
				month = 1;
				++year;
			}
		}
		printf("%4d-%02d-%02d\n", year, month, day);
	}
	system("pause");
	return 0;
}