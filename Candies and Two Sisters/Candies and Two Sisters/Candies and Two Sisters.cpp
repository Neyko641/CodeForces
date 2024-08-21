
#include <iostream>
#include <cmath>
int main()
{
    int t, n, a, b;
    std::cin >> t;
    while (t > 0)
    {
        std::cin >> n;
        a = std::abs(n - 1);
        b = std::abs(a - (a - 1));
        bool areGiven = a + b == n;
        bool aliceGetsMore = a > b;
        bool BettyGetsAtleastOne = b > 0;
        bool AliceGetsAtleastOne = a > 0;
        if (areGiven && aliceGetsMore && BettyGetsAtleastOne && AliceGetsAtleastOne)
        {
            int result = std::floor((n - 1) / 2);
            std::cout << result << std::endl;
        }
        else
        {
            std::cout << 0 << std::endl;
        }
        t--;
    }
}

