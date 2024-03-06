#include <iostream>
#include <vector>
#include <cmath>
int main()
{
	const int n = 5;
	int m;
	int indextoInsert = (n * n) / 2;
	int currentidxR = 0;
	int currentidxC = 0;
	std::vector<std::vector<int>> matrix;
	matrix.reserve(n * n);
	for (int rows = 0; rows < n; rows++)
	{
	     std::vector<int> col;
		 col.reserve(n);
		for (int cols = 0; cols < n; cols++)
		{
			std::cin >> m;
			col.push_back(m);
			
		}
		matrix.push_back(col);
	}

	for (int i = 0; i < matrix[0].size(); i++)
	{
		for (int j = 0; j < matrix.size(); j++)
		{
			if (matrix[i][j] == 1)
			{
				printf("%d", std::abs(2 - i) + std::abs(2 - j));
			}
		}
	}
}
