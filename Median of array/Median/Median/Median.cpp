
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>


void insertion_sort(std::vector<int>& list)
{
	for (int i = 1; i < list.size(); i++)
	{
		int key = list[i];
		int prev_idx = i - 1;
		while (prev_idx >= 0 && list[prev_idx] > key)
		{
			list[prev_idx + 1] = list[prev_idx];
			prev_idx--;
			list[prev_idx + 1] = key;
		}
	}
}

void heapify(std::vector<int>& list, int size, int idx)
{
	int largest = idx;
	int l = 2 * idx + 1;
	int r = 2 * idx + 2;
	if (l < size && list[l] > list[largest])
	{
		largest = l;
	}
	if (r < size && list[r] > list[largest])
	{
		largest = r;
	}

	if (largest != idx)
	{
		std::swap(list[idx], list[largest]);

		heapify(list, size, largest);
	}
}
void heap_sort(std::vector<int>& list)
{
	for (int i = (list.size() / 2) - 1; i >= 0; i--)
	{
		heapify(list, list.size(), i);
	}

	for (int i = list.size() - 1; i >= 0; i--)
	{
		std::swap(list[0], list[i]);

		heapify(list, i, 0);
	}
}


std::vector<int> partition(std::vector<int>& list, int low, int high)
{
	int pivot = list[high];
	int i = low - 1;
	for (int j = low; j <= high - 1; j++)
	{
		if (list[j] <= pivot)
		{
			i++;

			std::swap(list[i], list[j]);
		}
	}
	std::swap(list[i + 1], list[high]);
	return list;
}
/*
void quick_sort(std::vector<int>& list, int low, int high)
{
	if (low >= high || low < 0)
	{
		return;
	}
	std::vector<int> pivot = partition(list, low, high);
	quick_sort(list, low, pivot.size() - 1);
	quick_sort(list, [pivot.begin() + 1], high);
}
*/
std::vector<int> merge(std::vector<int>& left, std::vector<int>& right)
{
	std::vector<int> result;
	while (!left.empty() && !right.empty())
	{
		if (left[0] <= right[0])
		{
			result.push_back(left[0]);
			left.erase(left.begin());
		}
		else
		{
			result.push_back(right[0]);
			right.erase(right.begin());
		}
	}
	while (!left.empty())
	{
		result.push_back(left[0]);
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		result.push_back(right[0]);
		right.erase(right.begin());
	}
	return result;
}
std::vector<int> merge_sort(std::vector<int>& list)
{
	if (list.size() <= 1)
	{
		return list;
	}
	int mid = list.size() / 2;
	std::vector<int> left;
	std::vector<int> right;
	for (int i = 0; i < list.size(); i++)
	{
		if (i < mid)
		{
			left.push_back(list[i]);
		}
		else
		{
			right.push_back(list[i]);
		}
	}
	left = merge_sort(left);
	right = merge_sort(right);

	return merge(left, right);
}
int median_of_three(int& a, int& b, int& c)
{
	if (a < b && b < c)
	{
		return b;
	}
	if (a < c && c <= b)
	{
		return c;
	}
	if (b <= a && a < c)
	{
		return a;
	}
	if (b < c && c <= a)
	{
		return c;
	}
	if (c <= a && a < b)
	{
		return a;
	}
	if (c <= b && b <= a)
	{
		return b;
	}
}
void intro_sort(std::vector<int>& list, int max_depth)
{
	if (list.size() < 16)
	{
		insertion_sort(list);
	}
	else if (max_depth == 0)
	{
		heap_sort(list);
	}
	int begin = 0;
	int mid = list.size() / 2;
	int end = list.size() - 1;
	int pivot = median_of_three(begin, mid, end);
	std::swap(pivot, end);

	//std::vector<int> p = partition(list, begin, end); 

	intro_sort(list, max_depth - 1);
	intro_sort(list, max_depth - 1);

}
void sort(std::vector<int>& list)
{
	int max_depth = std::log2(list.size()) * 2;
	intro_sort(list, max_depth);
}
void solve()
{
	int len, n;
	int median_found = 0;
	size_t ops = 0;
	std::cin >> len;
	std::vector<int>data;
	data.reserve(len);
	for (int i = 0; i < len; i++)
	{
		std::cin >> n;
		data.push_back(n);
	}
	sort(data.begin(), data.end());
	int median = (len + 1) / 2 - 1;
	int result = 0;
	for (int i = median; i < data.size(); i++)
	{
		if (data[i] == data[median])
		{
			result += 1;
		}
	}
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
