#include <iostream>

using namespace std;

class Date{
public:

	int GetMonthDay(int year, int month)
	{
		static int MonthDay[13] = { 0, 31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}
		return MonthDay[month];
	}

	bool operator ==(const Date& d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}

	bool operator !=(const Date& d)
	{
		return !(*this == d);
	}

	Date& operator ++()
	{
		_day += 1;
		if (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			++_month;
			if (_month > 12)
			{
				_month = 1;
				++_year;
			}
		}
		return *this;
	}

	friend istream& operator >>(istream& in, Date& d);

	bool operator <(const Date& d)
	{
		if (_year < d._year)
			return true;
		else if (_year == d._year && _month < d._month)
			return true;
		else if (_year == d._year && _month == d._month && _day < d._day)
			return true;
		return false;
	}


private:
	int _year;
	int _month;
	int _day;
};

istream& operator >>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}

int main()
{
	Date d1;
	Date d2;
	while (1)
	{
		int flag = 1;
		cin >> d1 >> d2;
		if (d1 < d2)
			flag = -1;
		int count = 0;
		while (d1 != d2)
		{
			if (flag == -1)
			{
				++d1;
				count++;
			}
			else
			{
				++d2;
				++count;
			}
		}
		cout << count << endl;
	}

	system("pause");
	return 0;
}