
#include <iostream>
#include <vector>
int main()
{
	int n, k, score, k_score;
	std::cin >> n >> k;
	int advances = 0;
	std::vector<int>scores;
	scores.reserve(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> score;
		scores.push_back(score);
	
	}
	k_score = scores[k - 1];
	for (int i = 0; i < scores.size(); i++)
	{
		if (scores[i] >= k_score && scores[i] > 0)
		{
			advances++;
		}
	}
	std::cout << advances;
}
