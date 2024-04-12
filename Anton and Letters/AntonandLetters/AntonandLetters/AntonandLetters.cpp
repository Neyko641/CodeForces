
#include <iostream>
#include <unordered_set>
#include <string>

std::string get_line()
{
	char current = ' ';
	std::string result;
	int has_ended = 0;
	while (!has_ended)
	{
		std::cin.get(current);
		if (current == '\n')
		{
			has_ended = 1;
			continue;
		}
		result += current;
	}
	return result;
}


int main()
{
	std::string s;
	s = get_line();
	int count = 0;
	std::unordered_set<char> set;
	for (int i = 1; i < s.size() - 1; i++)
	{
		char curr = s[i];
		if (curr >= 97 && curr <= 122)
		{
			set.insert(curr);
		}
	}
	for (int x = 0; x < set.size(); x++)
	{
		count++;
	}
	std::cout << count;
}

