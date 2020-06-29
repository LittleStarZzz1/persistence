#include <iostream>
#include <string>

//Êı¸ù
int main()
{
	std::string s;
	while (std::cin >> s)
	{
		int num = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			num += s[i] - '0';
		}
		int sum = 0;
		while (num)
		{
			sum += num % 10;
			num /= 10;
			if (num == 0 && (sum > 9))
			{
				num = sum;
				sum = 0;
			}
		}
		std::cout << sum << std::endl;
	}

	return 0;
}