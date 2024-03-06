#include <iostream>
#include <vector>
#include <algorithm>
std::vector<char> check_if_number(std::vector<char>& data, std::string str)
{
	data.reserve(str.size());
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			data.push_back(str[i]);
		}
	}
	std::sort(data.begin(), data.end());
	return data;
}
int main()
{
	std::string blackboardIn;
	std::cin >> blackboardIn;
	std::vector<char> characterArr;
	check_if_number(characterArr, blackboardIn);
	for (int i = 0; i < characterArr.size() - 1; i++)
	{
		std::cout << characterArr[i] << "+";
	}
	std::cout << characterArr[characterArr.size() - 1] << std::endl;
}
