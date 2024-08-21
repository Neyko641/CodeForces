
#include <iostream>
#include <vector>

int binpow(int a, int b) {
	if (b == 0)
		return 1;
	long long res = binpow(a, b / 2);
	if (b % 2)
		return res * res * a;
	else
		return res * res;
}

bool CheckIfAlreadyRound(int n)
{

	while (n > 0)
	{
		int result = n % 10;
		bool temp = !(result % 10);
		if (result != 0 && temp)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}
std::vector<int> filteredResult(std::vector<int>& data)
{
	std::vector<int> filtered;
	for (size_t i = 0; i < data.size(); i++)
	{
		if (data[i] != 0)
		{
			filtered.push_back(data[i]);
		}
	}
	return filtered;
}

std::vector<int> ConvertToRound(int n)
{
	bool check = CheckIfAlreadyRound(n);
	std::vector<int>Digits;
	int temp = n;
	while (temp > 0)
	{
		Digits.push_back(temp % 10);

		temp /= 10;
	}
	for (size_t i = 0; i < Digits.size(); i++)
	{
		size_t idx = Digits.size() - 1 - i;
		Digits[idx] *= binpow(10, idx);
	}
	Digits = filteredResult(Digits);
	return Digits;
}
int main()
{
	int t, num;
	std::cin >> t;
	while (t > 0)
	{
		std::cin >> num;
		std::vector<int> result = ConvertToRound(num);

		std::cout << result.size() << std::endl;
		for (size_t i = 0; i < result.size(); i++)
		{
			std::cout << result[i] << ' ';
		}
		std::cout << std::endl;
		t--;
	}
}
