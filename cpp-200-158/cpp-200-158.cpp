// cpp-200-158.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

int main()
{
	std::list<int> data1;
	std::list<int> data2{ 3,4,5 };

	data1.push_back(2);
	data2.push_back(7);

	data1.merge(data2);

	std::cout << "== List Merge ==" << std::endl;
	for (std::list<int>::iterator it = data1.begin(); it != data1.end(); ++it)
	{
		std::cout << " " << *it;
	}
	std::cout << std::endl;

	data2 = { 3,4,5 };
	data1.splice(data1.begin(), data2);

	std::cout << "== List Splice ==" << std::endl;
	for (auto it = data1.begin(); it != data1.end(); ++it)
	{
		std::cout << " " << *it;
	}

	return 0;
}

