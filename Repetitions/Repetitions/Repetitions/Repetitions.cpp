
#include <iostream>

int main()
{
	std::string str;
	std::cin >> str;
	int count = 0;
	int max = 0;
	for (int i = 0; i < str.size(); i++)
	{
		char current = str[i];
		char next = str[i + 1];
		++count;
		if (count > max)
		{
			max = count;
		}
		if (current != next)
		{
			count = 0;
		}
		
		
	}
	std::cout << max;
}

