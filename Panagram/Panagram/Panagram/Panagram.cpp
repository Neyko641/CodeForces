
#include <iostream>
#include <vector>

void to_lower(char& ch)
{
	if (ch >= 65 && ch <= 90)
	{
		ch += 32;
	}
}


std::string convert_to_lower(std::string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		to_lower(str[i]);
	}
	return str;
}


int main()
{
	int size;
	std::string in;
	std::cin >> size;
	int has_occured = 0;
	std::cin >> in;
	convert_to_lower(in);
	std::vector<int> occurances(100, 0);
	for (int i = 0; i < in.size(); i++)
	{
		occurances[in[i] - 97] += 1;
	}
	for (int i = 0; i < 26; i++)
	{
		if (occurances[i] == 0)
		{
			std::cout << "NO" << std::endl;
			has_occured = 1;
			break;
		}
	}
	if (!has_occured)
	{
		std::cout << "YES" << std::endl;
	}
}
