
#include <iostream>

int main()
{
	int num_of_stones;
	std::string color_pattern;
	std::cin >> num_of_stones;
	std::cin >> color_pattern;
	int count = 0;
	for (int i = 0; i < color_pattern.size() - 1; i++)
	{
		char first = color_pattern[i];
		char second = color_pattern[i + 1];
		if (first == second )
		{
			count++;
		}
	}
	std::cout << count << std::endl;
}
