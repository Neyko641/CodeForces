
#include <iostream>

int main()
{
	std::string op;
	int ops;
	int val = 0;
	std::cin >> ops;
	for (int i = 0; i < ops; i++)
	{
		std::cin >> op;
		if (op[0] == '+' || op[op.size() - 1] == '+')
		{
			++val;
		}
		else
		{
			--val;
		}
	}
	std::cout << val;
}


