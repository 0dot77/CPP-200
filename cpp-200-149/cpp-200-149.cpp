// cpp-200-149.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>
#include <string>

int main()
{
	std::tuple<int> data1(1); // 4
	std::tuple<int, double> data2(1, 2.3); // 16
	std::tuple<int, double, char> data3(1, 2.3, 'a'); // 24

	std::cout << sizeof(data1) << ", " << sizeof(data2) << ", " << sizeof(data3) << std::endl;

	return 0;
}

