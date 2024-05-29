// cpp-200-173.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <list>
#include <string>

int main()
{

	std::list<int> data1 = { 5,3,1,7,9 };
	std::list<std::string> data2 = { "ef", "ab", "cd", "ij", "gh" };

	std::cout << std::boolalpha;
	std::cout << "data1 sort : " << std::is_sorted(data1.begin(), data1.end()) << std::endl;
	std::cout << "data2 sort : " << std::is_sorted(data2.begin(), data2.end()) << std::endl;

	data1.sort();
	data2.sort();

	std::cout << "data1 sort : " << std::is_sorted(data1.begin(), data1.end()) << std::endl;

	std::cout << "data2 sort : " << std::is_sorted(data2.begin(), data2.end()) << std::endl;

	std::cout << "== data1 ==" << std::endl;
	for (auto i : data1)
		std::cout << i << ", ";

	std::cout << std::endl << "== data2 ==" << std::endl;

	for (auto i : data2)
		std::cout << i << ", ";

	return 0;
}

