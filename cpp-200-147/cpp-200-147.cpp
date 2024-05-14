// cpp-200-147.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>
#include <string>

int main()
{
	typedef std::tuple<std::string, int, double> Data;

	Data data1("문자열", 10, 1.2);

	std::string my_str = "";
	int my_int = 0;

	std::tie(my_str, my_int, std::ignore) = data1;

	std::cout << my_str << ", " << my_int << std::endl;

	return 0;
}

