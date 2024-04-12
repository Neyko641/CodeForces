
#include <iostream>

/*
Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

Input
The only line contains an integer n (1 ≤ n ≤ 1018).

Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

Output
Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).



*/

int is_lucky(long long n)
{
    int current_digit;
    int digits = 0;
    while (n > 0)
    {
        current_digit = (n % 10);
        if (current_digit == 4 || current_digit == 7)
        {
            digits++;
        }
        n /= 10;
    }
    return (digits == 4 || digits == 7);
}


int main()
{
    long long n;
    std::cin >> n;
    if (is_lucky(n))
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}
