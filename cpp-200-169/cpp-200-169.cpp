// cpp-200-169.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> data({ 10,20,30,40 });

	std::cout << "== for, iterator ==" << std::endl;

	for (auto i = data.begin(); i != data.end(); ++i)
	{
		std::cout << *i << ", ";
	}

	std::cout << std::endl << "== range based for loop ==" << std::endl;

	for (const auto i : data)
		std::cout << i << ", ";

	std::cout << std::endl << "== range based for loop ==" << std::endl;

	for (auto& i : data)
		std::cout << i + 2 << ", ";

	std::cout << std::endl;
}

