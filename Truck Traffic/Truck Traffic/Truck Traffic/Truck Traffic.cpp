
#include <iostream>
#include <vector>

int check_str(std::string data)
{
	for (int i = 0; i < data.size() / 2; i++)
	{
		char first = data[i];
		char last = data[data.size() - i - 1];
		if (first != last)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int lanes, newlane, addedtrucks;
	std::cin >> lanes >> newlane;
	std::vector<int> result;
	result.reserve(newlane);
	std::string truck;
	std::cin >> truck;
	int full;
	int idx;
	int sum;
	while (newlane > 0)
	{
		full = 0;
		idx = 0;
		sum = 0;
		std::string temp = truck;
		std::cin >> addedtrucks;
		while(!full)
		{

			if (temp[idx] == '.')
			{
				while (addedtrucks > 0 && idx < temp.size())
				{
					temp[idx] = 'T';
					addedtrucks--;
					idx++;
				}
				if (idx >= temp.size() && check_str(temp))
				{
					addedtrucks = 0;
				}
			}	
			if (addedtrucks == 0)
			{
				full = 1;
				for (int i = 0; i < temp.size(); i++)
				{
					if (temp[i] == 'T')
					{
						sum += 1;
					}
				}
				result.push_back(sum);
				continue;
			}
			idx++;
		}
		newlane--;
	}
	for (int i = 0; i < result.size(); i++)
	{
		std::cout << result[i] << std::endl;
	}
}
