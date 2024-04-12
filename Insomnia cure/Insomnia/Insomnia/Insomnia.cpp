

#include <iostream>
int main()
{
	int n, k, l, m, d;
	std::cin >> k >> l >> m >> n >> d;
	int count = 0;
	
	for (int i = 1; i <= d; i++)
	{
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
		{
			count++;
		}
	}
	std::cout << count;
	//std::cout << (data[0] - data[1]) + (data[2] - data[3]);
}
