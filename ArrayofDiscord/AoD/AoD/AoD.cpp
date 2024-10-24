#include <iostream>
#include <vector>
int main()
{
	int n, k;
	std::cin >> n;
	std::vector<int> answers;
	answers.reserve(n);
	while (n--)
	{
		std::cin >> k;
		answers.push_back(k);
	}
	int count = 0;
	bool brokenSort = false;
	for (size_t i = 0; i < answers.size() - 1; i++)
	{
		answers[i]++;
		count++;
		if (answers[i] > answers[i + 1] || count % 2 == 0)
		{
			brokenSort = true;
			break;
		}
	}
	if (brokenSort)
	{
		for (size_t i = 0; i < answers.size(); i++)
		{
			std::cout << answers[i] << " ";
		}
		std::cout << '\n';
	}
	else
	{
		std::cout << "impossible" << '\n';
	}
}

