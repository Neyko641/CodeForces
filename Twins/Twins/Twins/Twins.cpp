

#include <iostream>
#include <vector>
#include <algorithm>
int greater(int a, int b)
{
	return a > b;
}
int main()
{
	int coins, coin;
	std::cin >> coins;
	std::vector<int> list_of_coins;
	list_of_coins.reserve(coins);
	int sum = 0;
	for (int i = 0; i < coins; i++)
	{
		std::cin >> coin;
		sum += coin;
		list_of_coins.push_back(coin);
	}
	std::sort(list_of_coins.begin(), list_of_coins.end(), greater);
	int count = 0;
	sum /= 2;
	int newSum = 0;
	for (int i = 0; i < list_of_coins.size(); i++)
	{
		if (newSum > sum)
		{
			break;
		}
		else
		{
			newSum += list_of_coins[i];
			count++;
		}
	}
	std::cout << count << std::endl;
}

