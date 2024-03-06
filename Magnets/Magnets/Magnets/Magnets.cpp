
#include <iostream>

int main()
{
	int magnetCount;
	std::cin >> magnetCount;
	std::string magnet;
	std::string previous;
	int groups = 1;
	for (int i = 0; i < magnetCount; i++)
	{
		std::cin >> magnet;
		if (magnet != previous && i > 0)
		{
			groups++;
		}
		previous = magnet;
	}
	std::cout << groups;
}
