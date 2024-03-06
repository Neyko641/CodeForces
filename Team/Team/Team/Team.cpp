
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int petya, vasya, tonya, n;
	scanf("%d", &n);
	int solutions = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &petya, &vasya ,&tonya);
		if (petya && vasya || petya && tonya || vasya && tonya)
		{
			solutions++;
		}
	}
	printf("%d", solutions);
}

