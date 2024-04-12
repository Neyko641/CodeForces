
#include <iostream>

int main()
{
	std::string teams;
	std::cin >> teams;
	int count = 1;
	for (int i = 0; i < teams.size() - 1; i++)
	{
		if (teams[i] == teams[i + 1])
		{
			count++;
		}
		else
		{
			count = 1;
		}
		if (count == 7)
		{
			std::cout << "YES" << std::endl;
			break;
		}
	}
	if (count != 7)
	{
		std::cout << "NO" << std::endl;
	}
}
