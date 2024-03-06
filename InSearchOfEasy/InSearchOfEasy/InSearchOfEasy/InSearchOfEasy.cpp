
#include <iostream>

int main()
{
	int contestants;
	std::cin >> contestants;
	int results;
	int isHard = 0;
	for (int i = 0; i < contestants; i++)
	{
		std::cin >> results;
		if (results == 1)
		{
			isHard = 1;
			break;
		}
	}
	if (isHard)
	{
		std::cout << "HARD" << std::endl;
	}
	else
	{
		std::cout << "EASY" << std::endl;
	}
}

