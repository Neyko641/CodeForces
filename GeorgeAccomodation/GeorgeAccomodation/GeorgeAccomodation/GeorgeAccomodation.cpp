
#include <iostream>

int main()
{
	int rooms;
	std::cin >> rooms;
	int tenants = 0;
	int capacity = 0;
	int freeRooms = 0;
	for (int i = 0; i < rooms; i++)
	{
		std::cin >> tenants >> capacity;
		if (capacity - tenants >= 2)
		{
			freeRooms++;
		}
	}
	std::cout << freeRooms;
}
