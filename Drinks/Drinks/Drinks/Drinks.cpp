#include <iostream>

int main()
{
	int drinks, volume;
	std::cin >> drinks;
	float sum = 0;
	for (int i = 0; i < drinks; i++)
	{
		std::cin >> volume;
		sum += volume;
	}
	printf("%.4f", (sum / drinks));
}

