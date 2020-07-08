#include <iostream>

//¼ô»¨²¼Ìõ
int main()
{
	char s[1001] = { 0 };
	char t[1001] = { 0 };
	while (std::cin >> s >> t)
	{
		char* ptr1 = s;
		int count = 0;
		while (*ptr1 != '\0')
		{
			char* ptr2 = t;
			while (*ptr1 != '\0' && *ptr1 != *ptr2)
			{
				++ptr1;
			}
			while (*ptr1 != '\0' && *ptr2 != '\0' && *ptr1 == *ptr2)
			{
				++ptr1;
				++ptr2;
			}
			if (*ptr2 == '\0')
				++count;
		}
		std::cout << count << std::endl;
	}


	return 0;
}