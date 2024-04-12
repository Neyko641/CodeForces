
#include <iostream>
#include <vector>
#include <algorithm>
int partition(std::vector<int>& data,int low, int high)
{

}
std::vector<int> quick_sort(std::vector<int>& list)
{
	int temp;
	for (int i = 0; i < list.size(); i++)
	{
		for (int j = 1; j < list.size(); j++)
		{
			if (list[i] > list[j])
			{
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}
	return list;
}
int main()
{
	int n, nums;
	std::vector<int> list;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> nums;
		list.push_back(nums);
	}
	//std::sort(list.begin(), list.end());
	//sort algorithm;
	sort(list);
	for (int i = 0; i < list.size(); i++)
	{
		std::cout << list[i] << " ";
	}
}