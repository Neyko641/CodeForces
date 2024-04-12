#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
int main()
{
	std::ios_base::sync_with_stdio(0);
	std::vector<int> data;
	long long tests, n, num;
	std::cin >> tests;
	for (int i = 0; i < tests; i++)
	{
		std::cin >> n;
		data.reserve(n);
		for (int i = 0; i < n; i++)
		{
			std::cin >> num;
			data.push_back(num);
		}
		std::sort(data.begin(),  data.end());
		int res = 1;
		for (long long i = 0; i < data.size() - 1; i++)
		{
			if (data[i + 1] - data[i] > 1)
			{
				res = 0;
			}
		}
		std::cout << (res ? "YES\n" : "NO\n");
		data.clear();
	}
}
