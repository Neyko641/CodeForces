
#include <iostream>
#include <unordered_set>
int main()
{

	int shoe;
	std::unordered_set<int> shoes;
	for (int i = 0; i < 4; i++)
	{
		std::cin >> shoe;
		shoes.insert(shoe);
	}
	
	int shoes_to_buy = 4 - shoes.size();
	std::cout << shoes_to_buy;
}

