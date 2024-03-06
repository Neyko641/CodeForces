
#include <iostream>

int main()
{
	int max_height;
	int friends;
	std::cin >> friends >> max_height;
	int friend_height;
	int sum_of_width = 0;
	for (int i = 0; i < friends; i++)
	{
		std::cin >> friend_height;
		if (friend_height > max_height)
		{
			sum_of_width += 2;
		}
		else
		{
			sum_of_width += 1;
		}
	}
	std::cout << sum_of_width;
}
