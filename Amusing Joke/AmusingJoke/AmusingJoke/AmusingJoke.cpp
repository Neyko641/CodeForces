
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> hash(26, 0);
	std::string str1, str2, str3;
	std::cin >> str1 >> str2 >> str3;
	for (int i = 0; i < str1.size(); i++)
	{
		hash[str1[i] - 65] += 1;
	}
	for (int i = 0; i < str2.size(); i++)
	{
		hash[str2[i] - 65] += 1;
	}
	for (int i = 0; i < str3.size(); i++)
	{

		hash[str3[i] - 65] -= 1;

	}
	int valid = 1;
	for (int i = 0; i < hash.size(); i++)
	{

		if (hash[i] != 0)
		{
			valid = 0;
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


