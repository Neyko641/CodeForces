
#include <iostream>

int main()
{
	int year;
	std::cin >> year;
	int year_is_distinct = 0;
	int next = year + 1;
	while (!year_is_distinct)
	{
		int first = next / 1000;
		int second = next / 100 % 10;
		int third = next / 10 % 10;
		int fourth = next % 10;
		if (first != second && first != third && first != fourth && second != third && second != fourth && third != fourth)
		{
			year_is_distinct = 1;
		}
		else
		{
			next++;
		}
	}
	std::cout << next << std::endl;
}

