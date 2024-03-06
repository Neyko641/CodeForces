
#include <iostream>

int main()
{
	int stops;
	std::cin >> stops;
	int current_stop = 0;
	int max_cap = 0;
	int pass_enter;
	int pass_leave;
	int pass_on_board = 0;
	while(current_stop < stops)
	{
		std::cin >> pass_leave >> pass_enter;
		pass_on_board -= pass_leave;
		pass_on_board += pass_enter;
		if (max_cap < pass_on_board)
		{
			max_cap = pass_on_board;
		}
		current_stop++;
	}
	std::cout << max_cap << std::endl;
}
