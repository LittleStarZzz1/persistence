#include <iostream>
#include <string>

using namespace std;

//MP3光标位置
int main()
{
	int Song_num;//表示歌曲数量
	string s;//表示指令
	while (cin >> Song_num)
	{
		cin >> s;
		int cur = 1;//表示光标位于第几首歌曲, 初始位置为第一首歌
		int first = 1;//表示当前页的第一首歌曲, 初始为1
		if (Song_num <= 4)
		{
			for (int i = 0; i < s.size(); ++i)
			{
				if (cur == 1 && s[i] == 'U')//特殊翻页
					cur = Song_num;
				else if (cur == Song_num && s[i] == 'D')//特殊翻页
					cur = 1;
				else if (s[i] == 'D')
					cur++;
				else
					cur--;
			}
			for (int i = 1; i <= Song_num - 1; ++i)
				cout << i << ' ';
			cout << Song_num << endl;//输入当前列表, 由于歌曲数目<=4,直接输出全部歌曲即可
			cout << cur << endl;//输出当前光标所处位置
		}
		else
		{
			for (int i = 0; i < s.size(); ++i)
			{
				//特殊翻页
				if (first == 1 && cur == 1 && s[i] == 'U')
				{
					first = Song_num - 3;
					cur = Song_num;
				}
				//特殊翻页
				else if (first == Song_num - 3 && cur == Song_num && s[i] == 'D')
				{
					first = 1;
					cur = 1;
				}
				else if (first != 1 && cur == first && s[i] == 'U')
				{
					//当前页不是第一页, 光标位于当前页第一首歌粗
					cur--;
					first--;//需要更新当前页第一首歌编号
				}
				else if (first != Song_num - 3 && cur == first + 3 && s[i] == 'D')
				{
					//当前页不是最后一页, 光标位于当前页的第一首歌曲
					cur++;
					first++;//需要更新当前页第一首歌编号
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