

#include <iostream>
#include <deque>
int main()
{
	std::ios_base::sync_with_stdio(false);
	long long tests, ship, ship_amounts, attacks;
	std::cin >> tests;

	for (int i = 0; i < tests; i++)
	{

		std::cin >> ship_amounts >> attacks;
		std::deque<long long> ships;

		for (int i = 0; i < ship_amounts; i++)
		{
			std::cin >> ship;
			ships.push_back(ship);
		}
		while(ships.size() > 1 && attacks)
		{
			long long min = (ships.front(), ships.back());
			if (attacks < 2 * min)
			{
				ships.front() -= (attacks / 2) + (attacks % 2);
				if (ships.front() < 0)
				{
					ships.front() = 0;
				}
				ships.back() -= (attacks / 2);
				if (ships.back() < 0)
				{
					ships.back() = 0;
				}
				attacks = 0;
			}
			else 
			{
				ships.front() -= min;
				ships.back() -= min;
				attacks -= (2 * min);
			}
			if (ships.front() == 0)
			{
				ships.pop_front();
			}
			if (ships.back() == 0)
			{
				ships.pop_back();
			}
			
		}
		int result = ship_amounts - ships.size();
		std::cout << result + (ships.size() && ships.front() <= attacks) << '\n';
	}
}
