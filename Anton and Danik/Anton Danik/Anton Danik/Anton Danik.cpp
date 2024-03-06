
#include <iostream>

int main()
{
	int games_played;
	std::cin >> games_played;
	char winner;
	int anton = 0;
	int danik = 0;
	for (int i = 0; i < games_played; i++)
	{
		std::cin >> winner;
		if (winner == 'A')
		{
			anton++;
		}
		else
		{
			danik++;
		}
	}
	if (anton > danik)
	{
		std::cout << "Anton" << std::endl;
	}
	else if (anton < danik)
	{
		std::cout << "Danik" << std::endl;
	}
	else
	{
		std::cout << "Friendship" << std::endl;
	}
}
