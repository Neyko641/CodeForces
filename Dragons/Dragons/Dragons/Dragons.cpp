
#include <iostream>
#include <vector>
#include <algorithm>
void solve()
{
	int kirito_strength, dragon_strength, bonus_strength, num_of_dragons;
	int died = 0;
	std::vector<std::pair<int,int>> dragons;
	std::cin >> kirito_strength >> num_of_dragons;
	dragons.reserve(num_of_dragons);
	for (int i = 0; i < num_of_dragons; i++)
	{
		std::cin >> dragon_strength >> bonus_strength;
		dragons.push_back({ dragon_strength, bonus_strength });
	}
	std::sort(dragons.begin(), dragons.end());
	for (const auto& x : dragons)
	{
		if (kirito_strength > x.first)
		{
			kirito_strength += x.second;
		}
		else
		{
			died = 1;
			break;
		}
	}
	if (died)
	{
		std::cout << "NO\n";
	}
	else
	{
		std::cout << "YES\n";
	}
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
