#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>


int check_for_dup(std::vector<int>levelsPassed, int el)
{
	for (int i = 0; i < levelsPassed.size(); i++)
	{
		if (el == levelsPassed[i])
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int levels, littleX, littleY, xLevelPassed, yLevelPassed;
	std::vector<int>levelsPassed;
	int count = 0;
	scanf("%d %d", &levels, &littleX);
	for (int i = 0; i < littleX; i++)
	{
		scanf("%d", &xLevelPassed);
		if (!check_for_dup(levelsPassed, xLevelPassed))
		{
			levelsPassed.push_back(xLevelPassed);
		}
		
	}
	scanf("%d", &littleY);
	for (int i = 0; i < littleY; i++)
	{
		scanf("%d", &yLevelPassed);
		if (!check_for_dup(levelsPassed, yLevelPassed))
		{
			levelsPassed.push_back(yLevelPassed);
		}

	}
	int completed = levelsPassed.size() == levels;
	if (completed)
	{
		printf("I become the guy.\n");
	}
	else
	{
		printf("Oh, my keyboard!");
	}
	
}

