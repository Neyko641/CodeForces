
#include <iostream>
#include <cmath>
int main()
{
	int cost_banana, dollars, amount;
	std::cin >> cost_banana >> dollars >> amount;
	for (int i = 1; i <= amount; i++)
	{
		dollars = (dollars - (i * cost_banana));
	}
	if (dollars > 0)
	{
		std::cout << 0 << std::endl;
	}
	else
	{
		std::cout << std::abs(dollars) << std::endl;
	}
	
}

