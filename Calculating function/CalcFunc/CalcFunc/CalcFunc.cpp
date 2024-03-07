
#include <iostream>
#include <cmath>
/*
long long power(long long base, long long exponent)
{
	long long sum = 1;
	for (long long i = 0; i < exponent; i++)
	{
		sum *= base;
	}
	return sum;
}
*/
/*long long calculating_function(long long n)
{
	long long sum = 0;
	for (long long i = 1; i <= n; i++)
	{
		sum = sum + std::pow((-1), i) * i;
	}
	return sum;
}
*/
int main()
{
	long long n, a;
	std::cin >> n;
	if (n % 2 == 0)
	{
		a = (n / 2);
	}
	else
	{
		a = ((n + 1) / 2) * (-1);
	}
	std::cout << a;
}
