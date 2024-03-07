
#include <iostream>
#include <vector>
int main()
{
	int n, m, tests;
	std::cin >> tests;
	std::vector<int> results;
	results.reserve(tests);
	for (int i = 0; i < tests; i++)
	{
		std::cin >> n;
		std::vector<int> arr;
		arr.reserve(n);
		for (int i = 0; i < n; i++)
		{
			std::cin >> m;
			arr.push_back(m);
		}
		int x = arr[0];
		for (int i = 1; i < arr.size(); i++)
		{
			x &= arr[i];
		}
		results.push_back(x);
	}
	for (int i = 0; i < results.size(); i++)
	{
		printf("%d\n", results[i]);
	}
}

