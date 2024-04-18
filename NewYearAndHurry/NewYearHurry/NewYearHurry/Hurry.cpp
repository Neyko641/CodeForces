
#include <iostream>
void solve()
{
	int n, k;
	const int time_limit = 240;
	std::cin >> n >> k;
	int sum = 0;
	int solved = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += 5 * i;
		if (sum + k <= time_limit)
		{
			solved = i;
		}
		else
		{
			break;
		}
	}
	std::cout << solved << '\n';
}



int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	//int tc;
	//std::cin >> tc;
	//while (tc--)
	//{
		solve();
	//}
}
