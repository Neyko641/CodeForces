
#include <iostream>
#include <unordered_map>
int main()
{
	//std::unordered_map<std::string, int> figures = { {"Tetrahedron", 4}, { "Cube", 6 }, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20} };
	int n;
	std::string figure;
	std::cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> figure;
		if (figure == "Icosahedron")
		{
			sum += 20;
		}
		else if (figure == "Dodecahedron")
		{
			sum += 12;
		}
		else if (figure == "Octahedron")
		{
			sum += 8;
		}
		else if (figure == "Cube")
		{
			sum += 6;
		}
		else if (figure == "Tetrahedron")
		{
			sum += 4;
		}
	}
	std::cout << sum;
}

