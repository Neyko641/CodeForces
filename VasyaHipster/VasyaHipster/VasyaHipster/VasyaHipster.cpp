
#include <iostream>

int main()
{
    int red, blue;
    std::cin >> red >> blue;
    int differentCol = 0;
    int sameCol = 0;
    while (red > 0 && blue > 0)
    {
        differentCol++;
        red--;
        blue--;
    }
    while (red > 1)
    {
     sameCol++;
     red-=2;
    }
    while (blue > 1)
    {
        sameCol++;
        blue -= 2;
    }
    std::cout << differentCol << " " << sameCol << "\n";
}
