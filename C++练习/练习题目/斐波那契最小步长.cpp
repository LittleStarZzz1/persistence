#include <iostream>

using namespace std;

//쳲��������б���
//����һ��������N(1 �� N �� 1,000,000)
//�����С������Ϊ쳲�������

int main1()
{
	int N;
	cout << "������һ������: ";
	cin >> N;
	int an_2 = 0, an_1 = 1, a_n;
	a_n = an_2 + an_1;
	while (1)
	{
		if (an_1 == N)
		{
			cout << "����" << N << "�Ѿ���쳲�������,����Ϊ0" << endl;
			break;
		}
		else if (an_1 > N)
		{
			if (abs(an_1 - N) < abs(an_2 - N))
			{
				cout << "��Ϊ쳲�����������С����Ϊ" << abs(an_1 - N) << endl;
				break;
			}
			else
			{
				cout << "��Ϊ쳲�����������С����Ϊ" << abs(an_2 - N) << endl;
				break;
			}
		}
		an_2 = an_1;
		an_1 = a_n;
		a_n = an_2 + an_1;
	}

	system("pause");
	return 0;
}