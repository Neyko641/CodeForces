
#include <iostream>
#include <bitset>
int main()
{
	std::string n, a;
	std::cin >> n >> a;
	for (int i = 0; i < n.size(); i++)
	{
		if ((n[i] ^ a[i]) == 1)
		{
			n[i] = '1';
		}
		else
		{
			n[i] = '0';
		}
	}
	std::cout << n;
}

