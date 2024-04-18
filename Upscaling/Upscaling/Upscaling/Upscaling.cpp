
#include <iostream>
#include <vector>
void solve()
{
	int n;
	std::vector<std::vector<char>>matrix;
	std::cin >> n;
	for (int y = 0; y < 2 * n; y++)
	{
		for (int x = 0; x < 2 * n; x++)
		{
			char symbol = (y/2 + x/2 & 1 ? '.' : '#');
			std::cout << symbol;
		}
		std::cout << '\n';
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
