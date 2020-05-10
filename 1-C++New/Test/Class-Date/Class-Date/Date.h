#pragma once
#include <iostream>

class Date
{
public:

	//ȫȱʡ���캯��(Ĭ�Ϲ��캯��)
	Date(int year = 0, int month = 1, int day = 1);
	//�������캯��
	Date(const Date& d);

	//��ȡĳ��ĳ�µ�����
	int GetMonthDay(int year, int month);

	//��ֵ���������
	Date& operator =(const Date& d);
	// >���������
	bool operator >(const Date& d);
	// ==���������
	bool operator ==(const Date& d);
	// !=���������
	bool operator !=(const Date& d);
	// <���������
	bool operator <(const Date& d);
	// >=���������
	bool operator >=(const Date& d);
	// <=���������
	bool operator <=(const Date& d);

	//���� += ����
	Date& operator +=(int day);
	//���� -= ����
	Date& operator -=(int day);
	//���� + ����
	Date operator +(int day);
	//���� - ����
	Date operator -(int day);

	//ǰ��++
	Date& operator ++();
	//����++
	Date operator ++(int);

	//ǰ��--
	Date& operator --();
	//����--
	Date operator --(int);

	//���� - ����, ��������
	int operator -(const Date& d);

	//��ӡ
	void Print();

	//��Ԫ����
	friend std::ostream& operator<<(std::ostream& out, const Date& d);
	friend std::istream& operator>>(std::istream& in, Date& d);

	//��������
	~Date();

private:
	int _year;
	int _month;
	int _day;
};

std::ostream& operator<<(std::ostream& out, const Date& d);
std::istream& operator<<(std::istream& out, const Date& d);