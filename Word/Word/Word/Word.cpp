#include <iostream>

int check_upper(char ch)
{
	if (ch >= 65 && ch <= 90)
	{
		return 1;
	}
	return 0;
}
int check_lower(char ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return 1;
	}
	return 0;
}
void ToLower(std::string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		char curr = str[i];
		if (check_upper(curr))
		{
			str[i] += 32;
		}
	}

}
void ToUpper(std::string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		char curr = str[i];
		if (check_lower(curr))
		{
			str[i] -= 32;
		}
	}
}
int main()
{
	long long lower_case = 0;
	long long upper_case = 0;
	std::string str;
	std::cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		char current = str[i];
		if (check_upper(current))
		{
			upper_case++;
		}
		else if (check_lower(current))
		{
			lower_case++;
		}
	}

	int diff = upper_case - lower_case; // >=1 if upper <= -1 if lower
		if (diff >= 1)
		{
			ToUpper(str);
		}
		else if (diff <= -1)
		{
			ToLower(str);
		}
		else
		{
			ToLower(str);
		}
	std::cout << str << std::endl;
}

