
#include <iostream>

void solve()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a < b && a < c && b < c)
	{
		std::cout << "STAIR" << '\n';
	}
	else if (a < b && b > c)
	{
		std::cout << "PEAK" << '\n';
	}
	else
	{
		std::cout << "NONE" << '\n';
	}
}



int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	int tc;
	std::cin >> tc;
	while (tc--)
	{
		solve();
	}
}
