#include <iostream>
#include <string>

//收件人列表
int main()
{
	int n;
	while (std::cin >> n)
	{
		getchar();//刷新缓冲区
		while (n--)
		{
			std::string str;
			std::getline(std::cin, str);

			if (str.find(' ') != -1 || str.find(',') != -1)
			{
				str.insert(str.begin(), '"');
				str.insert(str.end(), '"');
			}
			if (n == 0)
				std::cout << str << std::endl;
			else
				std::cout << str << ", ";
			//std::cout << std::endl;
		}
	}

	return 0;
}