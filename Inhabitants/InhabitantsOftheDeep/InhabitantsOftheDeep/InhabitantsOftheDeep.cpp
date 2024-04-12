

#include <iostream>
#include <vector>
int main()
{
	std::ios_base::sync_with_stdio(false);
	int tests, ship, ship_amounts, attacks;
	std::cin >> tests;

	for (int i = 0; i < tests; i++)
	{
		std::cin >> ship_amounts >> attacks;
		int attacksCount = 1;
		std::vector<int> ships;

		ships.reserve(ship_amounts);
		for (int i = 0; i < ship_amounts; i++)
		{
			std::cin >> ship;
			ships.push_back(ship);
		}
		int firstIdx = 0;
		int lastIdx = ships.size() - 1;
		int dead = 0;
		int sum = 0;
		int count = 0;
		while (attacksCount <= attacks && !dead)
		{
			
			if (attacksCount % 2 == 0)
			{
				ships[lastIdx] -= 1;
				if (ships[lastIdx] == 0)
				{
					--lastIdx;
					count++;
				}
				attacksCount++;
			}
			else
			{
				ships[firstIdx] -= 1;
				if (ships[firstIdx] == 0)
				{
					++firstIdx;
					count++;
				}
				attacksCount++;
			}
			for (int i = 0; i < ships.size(); i++)
			{
				sum += ships[i];
			}
			if (sum == 0)
			{
				dead = 1;
			}
			
		}
		std::cout << count << '\n';
	}
}
