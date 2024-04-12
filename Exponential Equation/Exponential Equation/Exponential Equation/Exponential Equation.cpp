

#include <iostream>
#include <cmath>
#define N 1000000007 
long long exponential(long long base, long long exp)
{
	if (exp == 0)
		return 1;

	if (exp == 1)
		return base % N;

	long int t = exponential(base, exp / 2);
	t = (t * t) % N;

	// if exponent is even value
	if (exp % 2 == 0)
		return t;

	// if exponent is odd value
	else
		return ((base % N) * t) % N;
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	long long res, n, tests;
	std::cin >> tests;
	int found = 0;
	for (int i = 0; i < tests; i++)
	{
		std::cin >> n;

		if (n % 2 == 0)
		{
			found = 0;
			for (long long x = 2; x <= n; x++)
			{
				if (found)
				{
					break;
				}
				for (long long y = 1; y <= n; y++)
				{
					long long resx = exponential(x, y);
					long long resy = exponential(y, x);
					res = resx * y + resy * x;
					if (res == n && !found)
					{
						found = 1;
						std::cout << x << " " << y << '\n';
						break;
					}
				}
			}
		}
		else
		{
			std::cout << -1 << '\n';
		}
	}
}
