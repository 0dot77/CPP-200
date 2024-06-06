// cpp-200-174.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <array>

int main()
{
	std::array<int, 5> data1 = { 5,3,1,7,9 };
	std::array<int, 5> data2 = { 1,3,5,7,9 };
	std::array<int, 7> data3 = { 2,2,1,3,5,7,9 };

	std::cout << std::boolalpha;
	std::cout << "data1 == data2 : " << std::is_permutation(data1.begin(), data1.end(), data2.begin()) << std::endl;

	std::cout << "data1 == data3 : " << std::is_permutation(data1.begin(), data1.end(), data3.begin()) << std::endl;

	std::cout << "data1 == data2 (+2) : " << std::is_permutation(data1.begin(), data1.end(), data3.begin()+2) << std::endl;

	return 0;
}

