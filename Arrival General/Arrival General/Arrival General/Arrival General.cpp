#include <iostream>
int main()
{
    int n, soldier;
    int max = INT_MIN;
    int min = INT_MAX;
    int minIdx = 0;
    int maxIdx = 0;
    std::cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> soldier;
        if (soldier > max)
        {
            max = soldier;
            maxIdx = i;
        }
        if (soldier <= min)
        {
            min = soldier;
            minIdx = i;
        }
    }
    if (maxIdx < minIdx)
    {
        count = (maxIdx - 1) + (n - minIdx);
    }
    else
    {
        count = (maxIdx - 1) + (n - minIdx) - 1;
    }
    std::cout << count;
}

