
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
void solve()
{
	int points;
	int x;
	std::cin >> points;
	std::vector<std::pair<int,int>> coordinates;
	std::vector<int> result;
	for (int i = 0; i < 2 * points; i++)
	{
		std::cin >> x;
		result.push_back(x);
	}
	std::sort(result.rbegin(), result.rend());
	for (int i = 0; i < points; i++)
	{
		coordinates.push_back({ result[i], result[i + points] });
	}
	int ans = 0;
	for (int i = 1; i < coordinates.size(); i++)
	{
		ans += std::abs(coordinates[i].first - coordinates[i - 1].first ) + std::abs(coordinates[i - 1].second - coordinates[i].second);
	}
	std::cout << ans << '\n';
	for (int i = 0; i < coordinates.size(); i++)
	{
		std::cout << coordinates[i].first << ' ' << coordinates[i].second << '\n';
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
