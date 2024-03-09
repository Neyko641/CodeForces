
#include <iostream>

int main()
{
	int q_len, time;
	std::string queue;
	std::cin >> q_len >> time;
	std::cin >> queue;
	while (time)
	{
		for (int i = 0; i < q_len; i++)
		{
			if (queue[i] == 'B' && queue[i+1] == 'G')
			{
				queue[i] = 'G';
				queue[i+1] = 'B';
				i++;
			}
		}
		time--;
	}
	std::cout << queue;
}

