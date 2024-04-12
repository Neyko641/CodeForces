
#include <iostream>

int main()
{
	std::string name;
	std::cin >> name;
	int valid = 0;
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == 'H' || name[i] == 'Q' || name[i] == '9')
		{
			valid = 1;
			break;
		}
	}
	if (valid)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
}

