#include <iostream>

int main()
{
	std::string str;
	std::cin >> str;
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	std::cout << str;
}
