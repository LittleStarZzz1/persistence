#include <iostream>
#include <string>

//�ռ����б�
int main()
{
	int n;
	while (std::cin >> n)
	{
		getchar();//ˢ�»�����
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