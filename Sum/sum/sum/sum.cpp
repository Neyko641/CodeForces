
#include <iostream>

int main()
{
    int tc;
    int a, b, c;
    std::cin >> tc;
    while (tc--)
    {
        std::cin >> a >> b >> c;

        if (a + b == c || a + c == b || b + c == a)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
}

