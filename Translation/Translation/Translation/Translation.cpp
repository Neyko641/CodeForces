
#include <iostream>



int main()
{
	std::string word, reversed;
	std::cin >> word;
	std::cin >> reversed;
	int isNotEqual = 0;
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] != reversed[reversed.size() - i - 1])
		{
			isNotEqual = 1;
			std::cout << "NO" << std::endl;
			break;
		}
	}
	if (!isNotEqual)
	{
		std::cout << "YES" << std::endl;
	}
}
