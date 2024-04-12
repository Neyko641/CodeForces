
#include <iostream>
#include <vector>
int main()
{
	const std::vector<int> bills = { 100,20,10,5,1 };
	int amount;
	std::cin >> amount;
	int count = 0;
	int idx = 0;
	while (amount)
	{
		int newAmount = amount - bills[idx];
		if (newAmount >= 0)
		{
			amount = newAmount;
			count++;
			continue;
		}

		if (newAmount < 0)
		{
			idx++;
		}
	}
	std::cout << count;

}

