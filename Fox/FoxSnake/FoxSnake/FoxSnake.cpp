#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	int n, m;
	std::cin >> n >> m;
	int count = 0;
	for (int h = 0; h < n; h++)
	{
		if (h % 2 == 0)
		{
			for (int w = 0; w < m; w++)
			{
				std::cout << '#';
			}
			std::cout << '\n';
		}
		else
		{
			if (count % 2 == 1)
			{
				std::cout << '#';
				for (int w = 0; w < m - 1; w++)
				{
					std::cout << '.';
				}
				std::cout << '\n';
			}
			else
			{
				for (int w = 0; w < m - 1; w++)
				{
					std::cout << '.';
				}
				std::cout << '#' << '\n';

			}
			count++;
		}
	}
}

