#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//�ַ����ı༭����
int LevenshteinDistance(const string& s1, const string& s2)
{
	int row = s1.size();
	int col = s2.size();
	vector<vector<int>> v(row + 1, vector<int>(col + 1, 0));
	//v[i][j]��ʾ�ַ���s1[0, i]���ַ���s2[0, j]�ı༭�������
	//�Ա߽�ֵ���г�ʼ��
	for (int i = 1; i <= col; ++i)
	{
		v[0][i] = i;//��ʾ�ַ���s1[1, i]�����ַ����ı༭����
	}
	for (int j = 1; j <= row; ++j)
	{
		v[j][0] = j;//��ʾ���ַ������ַ���s2[1, j]�ı༭����
	}

	for (int i = 1; i <= row; ++i)
	{
		for (int j = 1; j <= col; ++j)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				v[i][j] = v[i - 1][j - 1];//�����ַ����,�����в���
			}
			else
			{
				v[i][j] = v[i - 1][j - 1] + 1;//�����ַ������,��������(�滻)+1
			}
			v[i][j] = min(v[i][j], v[i - 1][j] + 1);
			v[i][j] = min(v[i][j], v[i][j - 1] + 1);
		}
	}
	return v[row][col];
}

int main()
{
	string s1;
	string s2;
	while (getline(cin, s1) && getline(cin, s2))
	{
		cout << LevenshteinDistance(s1, s2) << endl;
	}


	return 0;
}