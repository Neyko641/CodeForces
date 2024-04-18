
#include <iostream>

void to_lower(std::string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
	}
}
std::string filter_vowels(std::string& str)
{
	std::string result;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != 'a'
			&& str[i] != 'i'
			&& str[i] != 'u'
			&& str[i] != 'e'
			&& str[i] != 'o'
			&& str[i] != 'y')
		{
			result += str[i];
		}
	}
	return result;
}
std::string insert_dot_before_consonant(std::string& str)
{
	std::string result;
	for (int i = 0; i < str.size(); i++)
	{
		result += '.';
		result += str[i];
	}
	return result;
}

void solve()
{
	std::string str;
	std::cin >> str;
	to_lower(str);
	str = filter_vowels(str);
	std::string result = insert_dot_before_consonant(str);
	
	std::cout << result;
}



int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	//int tc;
//	std::cin >> tc;
//	while (tc--)
//	{
		solve();
//	}
}
