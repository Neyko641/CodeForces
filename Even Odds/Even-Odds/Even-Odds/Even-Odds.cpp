#include <iostream>
#include <vector>
int main()
{
	long long n, k;
	std::cin >> n >> k;
	std::cout << ((n + 1) / 2 >= k ? k * 2 - 1 : 2 * (k - (n + 1) / 2));
}

