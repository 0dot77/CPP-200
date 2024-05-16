// cpp-200-150.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>
#include <string>


int main()
{
	std::tuple<int, std::string> data1(1, "def");
	std::tuple<int, std::string> data2(1, "abc");

	if (data1 > data2)
		std::cout << "data1 > data2" << std::endl;
	else
		std::cout << "data1 < data2" << std::endl;

	std::tuple<double, std::string> data3(1.0, "def");
	std::tuple<double, std::string, int> data4(2.0, "abc", 3);

	if (data3 > data4)
		std::cout << "data3 > data4" << std::endl;
	else
		std::cout << "data3 < data4" << std::endl;
	return 0;
}

