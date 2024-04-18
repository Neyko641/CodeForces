
#include <iostream>
#include <vector>

void solve()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	long long  tests, n, x, p;
	std::cin >> tests;
	for (int i = 0; i < tests; i++)
	{
		std::cin >> n >> x;
		std::vector<int>data(n);
		int pos = -1;
		for (int i = 0; i < n; i++)
		{
			std::cin >> data[i];
		}
		for (int i = 0; i < data.size(); i++)
		{
			if (data[i] == x)
			{
				pos = i + 1;
			}
		}
		int l = 1;
		int r = n + 1;
		while (r - l > 1)
		{
			int mid =  (r + l) / 2;
			if (data[mid - 1] <= x)
			{
				l = mid;
			}
			else
			{
				r = mid;
			}
		}
		if (pos == l - 1)
		{
			std::cout << "0" << '\n';
		}
		else
		{

			std::cout << "1\n";
			std::cout << pos << ' ' << l << '\n';
		}
	}
}

int main()
{
	solve();
}

