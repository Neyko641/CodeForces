
#include <iostream>
#include <unordered_map>
int main()
{
	int friends, gifts;
	std::cin >> friends;
	std::unordered_map<int, int> friendsGift;
	for (int i = 1; i <= friends; i++)
	{
		std::cin >> gifts;
		friendsGift.insert({i, gifts});
	}
	for(int i = 1; i <= friends; i++)
	{
		for (auto& x : friendsGift)
		{
			if (x.second == i)
			{
				std::cout << x.first << " ";
			}
		}
	}
}
