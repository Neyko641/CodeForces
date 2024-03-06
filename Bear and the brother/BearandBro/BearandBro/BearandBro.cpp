
#include <iostream>

int main()
{
	int limak_age;
	int bob_age;
	std::cin >> limak_age >> bob_age;
	int count = 0;
	while (limak_age <= bob_age)
	{
		limak_age *= 3;
		bob_age *= 2;
		count++;
	}
	std::cout << count;
}
