
#include <iostream>

int threeWayMin(int a, int b, int c)
{
	if (a < b && a < c)
	{
		return a;
	}
	else if (b < a && b < c)
	{
		return b;
	}
	else
	{
		return c;
	}
}



int main()
{
	int n, k, l, c, d, p, nl, np;
	std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int mldrink = (k * l);
	int toasts = (mldrink / n);
	int totallimes = (c * d);
	int totalSalt = (p / np);
	std::cout << threeWayMin(totallimes, toasts, totalSalt) / n << std::endl;
}
