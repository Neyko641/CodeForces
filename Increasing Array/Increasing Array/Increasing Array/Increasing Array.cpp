
#include <iostream>
#include <vector>
int main()
{
	std::vector<long long> data;
	long long n;
	long long moves = 0;
	std::cin >> n;
	data.reserve(n);
	long long count = 0;
	long long m;
	while (count < n)
	{
		std::cin >> m;
		data.push_back(m);
		count++;
	}
	long long difference;
	for (size_t i = 1; i < data.size(); i++)
	{
		long long prev = data[i - 1];
		long long curr = data[i];
		if (curr < prev)
		{
			difference = std::abs(curr - prev);
			moves += difference;
			data[i] += difference;
		}
	}
	std::cout << moves << std::endl;
}

