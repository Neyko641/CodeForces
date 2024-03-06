

#include <iostream>
#include <set>

int main()
{
	std::string name;
	std::cin >> name;
	int count = 0;
	int dup;
	for (int leftptr = 0; leftptr < name.size(); leftptr++)
	{
		dup = 0;
		for (int rightptr = leftptr + 1; rightptr < name.size(); rightptr++)
		{
			if (name[leftptr] == name[rightptr])
			{
				dup = 1;
				break;
			}
		}
		if (dup != 1)
		{
			count++;
		}
	}
	int isMale = count % 2 == 1;
	if (isMale)
	{
		std::cout << "IGNORE HIM!" << std::endl;
	}
	else
	{
		std::cout << "CHAT WITH HER!" << std::endl;
	}
}

