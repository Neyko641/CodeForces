#include <iostream>
#include <vector>
int main()
{
	int house_location;
	std::cin >> house_location;
	
	if (house_location % 5 == 0)
	{
		std::cout << house_location / 5;
	}
	else
	{
		std::cout << (house_location / 5) + 1;
	}
	
}

