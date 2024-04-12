#include <iostream>
#include <vector>
int main()
{
    int n, plane;
    std::vector<int>planes;
    std::cin >> n;
    planes.reserve(n);
    for (int i = 1; i <= n; i++)
    {
        std::cin >> plane;
        planes.push_back(plane);
    }
    int love = 0;
    for (int i = 1; i <= n; i++)
    {
        if (planes[planes[planes[i]]] == i)
        {
            love = 1;
            break;
        }
    }
    if (love == 1)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}
