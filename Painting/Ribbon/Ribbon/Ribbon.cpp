
#include <iostream>
#include <vector>
int main()
{
	std::ios_base::sync_with_stdio(0);
	int tests, n, m, k;
	std::cin >> tests;
	for (int i = 0; i < tests; i++)
	{
		int can_paint_same_col = 1;
		std::vector<int> colors;
		std::cin >> n >> m >> k;
		colors.reserve(m);
		for (int i = 0; i < m; i++)
		{
			colors.push_back(2);
		}
		int l = 0;
		while (k > 0 && l < colors.size())
		{
			if (colors[l] == 2)
			{
				colors[l] = 1;
				k--;
			}
			else
			{
				l++;
			}
		}
		for (int i = 0; i < colors.size(); i++)
		{
			if (colors[i] != 1)
			{
				can_paint_same_col = 0;
			}
		}
		std::cout << (can_paint_same_col ? "NO\n" : "YES\n");

	}
}