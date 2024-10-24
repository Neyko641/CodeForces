#include <iostream>

int main()
{
    int k, r;
    int shovels = 0;
    std::cin >> k >> r;

    for (size_t i = 1; ; i++)
    {
        int totalNeeded = i * k;
        if (((totalNeeded - r) % 10) == 0 || ((totalNeeded) % 10) == 0)
        {
            std::cout << i << std::endl;
            break;
        }
    }

}
