#include <iostream>
#include <vector>

using namespace std;

//24���㷨
bool isTwentyFour(vector<double>& a, double result)
{
	if (a.empty())//����Ϊ�յ�ʱ���ж��Ƿ�ճ�24��
	{
		return result == 24;
	}
	for (int i = 0; i<a.size(); i++)
	{
		//ÿ��ȡ��һ������ȥ������
		vector<double> b(a);//���ı�ԭ����, ���ڻ���
		b.erase(b.begin() + i);//ÿȡ��һ������������, ��ɾ����Ӧ����
		if (isTwentyFour(b, result + a[i])
			|| isTwentyFour(b, result - a[i])
			|| isTwentyFour(b, result*a[i])
			|| isTwentyFour(b, result / a[i]))
			return true;
	}
	return false;
}

int main()
{
	vector<double> a(4, 0);
	while (cin >> a[0] >> a[1] >> a[2] >> a[3])
	{
		if (isTwentyFour(a, 0))
			cout << "true" << endl;
		else cout << "false" << endl;
	}
}