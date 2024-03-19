
#include <iostream>

int main()
{
	int tests, num, divisor, count;
	std::cin >> tests;
	for (int i = 0; i < tests; i++)
	{
		std::cin >> num >> divisor;
		if (num % divisor == 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			printf("%d\n", divisor - (num % divisor));
		}
	}
}