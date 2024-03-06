

#include <iostream>



int main()
{
	long long n;
	long long m;
	std::cin >> n;
	long long sum = (n * (n + 1)) / 2;
	for (int i = 1; i < n; i++)
	{
		std::cin >> m;
		sum -= m;
	}
	std::cout << sum << std::endl;
}