#include <iostream>
#include <string>

using namespace std;

//MP3���λ��
int main()
{
	int Song_num;//��ʾ��������
	string s;//��ʾָ��
	while (cin >> Song_num)
	{
		cin >> s;
		int cur = 1;//��ʾ���λ�ڵڼ��׸���, ��ʼλ��Ϊ��һ�׸�
		int first = 1;//��ʾ��ǰҳ�ĵ�һ�׸���, ��ʼΪ1
		if (Song_num <= 4)
		{
			for (int i = 0; i < s.size(); ++i)
			{
				if (cur == 1 && s[i] == 'U')//���ⷭҳ
					cur = Song_num;
				else if (cur == Song_num && s[i] == 'D')//���ⷭҳ
					cur = 1;
				else if (s[i] == 'D')
					cur++;
				else
					cur--;
			}
			for (int i = 1; i <= Song_num - 1; ++i)
				cout << i << ' ';
			cout << Song_num << endl;//���뵱ǰ�б�, ���ڸ�����Ŀ<=4,ֱ�����ȫ����������
			cout << cur << endl;//�����ǰ�������λ��
		}
		else
		{
			for (int i = 0; i < s.size(); ++i)
			{
				//���ⷭҳ
				if (first == 1 && cur == 1 && s[i] == 'U')
				{
					first = Song_num - 3;
					cur = Song_num;
				}
				//���ⷭҳ
				else if (first == Song_num - 3 && cur == Song_num && s[i] == 'D')
				{
					first = 1;
					cur = 1;
				}
				else if (first != 1 && cur == first && s[i] == 'U')
				{
					//��ǰҳ���ǵ�һҳ, ���λ�ڵ�ǰҳ��һ�׸��
					cur--;
					first--;//��Ҫ���µ�ǰҳ��һ�׸���
				}
				else if (first != Song_num - 3 && cur == first + 3 && s[i] == 'D')
				{
					//��ǰҳ�������һҳ, ���λ�ڵ�ǰҳ�ĵ�һ�׸���
					cur++;
					first++;//��Ҫ���µ�ǰҳ��һ�׸���
				}
				else if (s[i] == 'D')
					cur++;
				else
					cur--;
			}

			for (int i = first; i <= first + 3; ++i)
			{
				cout << i << ' ';
			}
			cout << endl;
			cout << cur << endl;
		}
	}
	return 0;
}