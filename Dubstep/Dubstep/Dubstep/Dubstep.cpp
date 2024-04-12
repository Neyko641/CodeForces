
#include <iostream>

int main()
{
	std::string str;
	std::cin >> str;
	std::string result;

	for (int i = 0; i < str.size() / 2; i++)
	{
		if (str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
		{
			str[i] = ' ';
			str[i+1] = ' ';
			str[i+2] = ' ';
		}
		if (str[str.size() - i - 3] == 'W' && str[str.size() - i - 2] == 'U' && str[str.size() - i - 1] == 'B')
		{
			str[str.size() - i - 1] = ' ';
			str[str.size() - i - 2] = ' ';
			str[str.size() - i - 3] = ' ';
		}

	}
	int count = 0;
	int has_added_space = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
		else
		{
			result += str[i];
			count = 0;
			has_added_space = 0;
		}
		if (count >= 1 && result != "" && !has_added_space)
		{
			result += ' ';
			has_added_space = 1;
		}

	}

	std::cout << result;
}
