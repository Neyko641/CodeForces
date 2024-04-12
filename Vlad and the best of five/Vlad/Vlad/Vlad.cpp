#include <iostream>



int main()
{
    std::ios_base::sync_with_stdio(false);
    int tests;
    std::cin >> tests;
    std::string str;
    str.reserve(5);
    for (int i = 0; i < tests; i++)
    {
        int Acount = 0;
        int Bcount = 0;
        std::cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'A')
            {
                Acount++;
            }
            else
            {
                Bcount++;
            }
        }
        if (Acount > Bcount)
        {
            std::cout << 'A' << '\n';
        }
        else
        {
            std::cout << 'B' << '\n';
        }
    }
}

