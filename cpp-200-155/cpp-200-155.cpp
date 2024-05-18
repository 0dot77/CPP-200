// cpp-200-155.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> data({ 1,2,3 });

	for (std::vector<int>::iterator iter = data.begin(); iter != data.end(); ++iter)
	{
		std::cout << *iter << ", ";
	}

	for (auto iter = data.cbegin(); iter != data.cend(); ++iter)
	{
		std::cout << *iter << ", ";
	}

	for (auto iter = data.rbegin(); iter != data.rend(); ++iter)
	{
		std::cout << *iter << ", ";
	}

	data.clear();

	return 0;
}

