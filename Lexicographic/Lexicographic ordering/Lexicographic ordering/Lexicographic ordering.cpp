#include <iostream>

void toLower(std::string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
	}
}

int main()
{
	std::string stringOne, stringTwo;
	std::cin >> stringOne >> stringTwo;
	toLower(stringOne);
	toLower(stringTwo);
	if (stringOne == stringTwo)
	{
		printf("%d", 0);
	}
	else if (stringOne < stringTwo)
	{
		printf("%d", -1);
	}
	else if (stringTwo > stringOne)
	{
		printf("%d", 1);
	}

}

