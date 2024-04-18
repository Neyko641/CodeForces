
#include <iostream>

long long division(long long a, long long b)
{
	return (a + b - 1) / b;
}


void solve()
{
	long long sticks, coal, torches;
	long long initial_sticks = 1;
	long long initial_coals = 0;
	std::cin >> sticks >> coal >> torches;
	long long trades = torches + torches * coal;
	long long result = torches + division(trades - 1, sticks - 1);
	std::cout << result << '\n';



}



int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	int tc;
	std::cin >> tc;
	while (tc--)
	{
		solve();
	}
}
