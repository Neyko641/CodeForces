
#include <iostream>

int main()
{
    int m, n;
    int domino = 2;
    int count = 0;
    std::cin >> m >> n;
    int resultMatrix = m * n;
    while (resultMatrix > 1)
    {
        resultMatrix -= domino;
        count++;
    }
    std::cout << count;
}
