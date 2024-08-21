#include <iostream>
#include <vector>




int main()
{
	int tc;
	int crimeOccurred;
	int sum = 0;
	int untreatedCrimes = 0;
	std::cin >> tc;
	while (tc > 0)
	{
	
		std::cin >> crimeOccurred;
		if (crimeOccurred == -1)
		{
			if (!sum)
			{
				untreatedCrimes++;
			}
			else
			{
				sum--;
			}
		}
		else
		{
			sum += crimeOccurred;
		}

		tc--;
	}

	std::cout << untreatedCrimes << std::endl;
}

