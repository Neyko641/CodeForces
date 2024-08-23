#include <iostream>
#include <cmath>

int main()
{
	int tc, score;
	std::cin >> tc >> score;
	int min  { score };
	int max { score };
	int amazing { 0 };
	while (--tc)
	{
		std::cin >> score;
		if (score < min)
		{
			min = score;
			amazing++;
		}
		if (score > max)
		{
			max = score;
			amazing++;
		}
	}
	std::cout << amazing;


}

