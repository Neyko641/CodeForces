
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	std::string emotions = "I hate ";
	for (int i = 2; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			emotions += "that I love ";
		}
		else if (i % 2 == 1)
		{
			emotions += "that I hate ";
		}
		
	}
	std::cout << emotions << "it" << std::endl;
}

