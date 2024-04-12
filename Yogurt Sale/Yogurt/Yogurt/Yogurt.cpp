
#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	long long purchases, amount, price_yog, discount_yog;
	std::cin >> purchases;
	for (int i = 0; i < purchases; i++)
	{
		std::cin >> amount >> price_yog >> discount_yog;
		long long result = amount * price_yog;
		if (discount_yog < 2 * price_yog)
		{
			result = (amount / 2) * discount_yog + (amount % 2) * price_yog;
		}
		std::cout << result << '\n';
		
	}
}
