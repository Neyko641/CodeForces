
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int n,athlete;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> athlete;

        std::vector<int> athletes(athlete);

        for (int& x : athletes)
        {
            std::cin >> x;
        }

        std::sort(athletes.begin(), athletes.end());

        int result = athletes[athletes.size() - 1] - athletes[0];

        for (int i = 0; i < athletes.size(); i++) {
            for (int j = i + 1; j < athletes.size(); j++) {
                result = std::min(result, athletes[j] - athletes[i]);
            }
        }
        std::cout << result << std::endl;
    }
}

