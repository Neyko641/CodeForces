
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>


int max(int a, int b, int c)
{
	if ((a > b && a > c))
	{
		return a;
	}
	else if ((b > a && b > c))
	{
		return b;
	}
	else if ((c > a && c > b))
	{
		return c;
	}
}
int min(int a, int b, int c)
{
	if ((a < b && a < c))
	{
		return a;
	}
	else if ((b < a && b < c))
	{
		return b;
	}
	else if ((c < a && c < b))
	{
		return c;
	}
}
int main()
{
	int x1, x2, x3;
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> x1 >> x2 >> x3;
	}
	int result = max(x1,x2,x3) - min(x1,x2,x3);
	std::cout << result << std::endl;
	/*
	
	------------------
	7 1 4
	1 -> 4 +3
	7 -> 4 -3
	
	*/

}
