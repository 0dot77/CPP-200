// cpp-200-148.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>
#include <string>

int main()
{
	std::tuple<int, double> data1(1, 1.2);
	std::tuple<double, std::string> data2(3.4, "문자열1");

	auto data3 = std::tuple_cat(data1, data2);

	std::cout << std::get<0>(data3) << ", " << std::get<1>(data3) << ", " << std::get<2>(data3) << ", " << std::get<3>(data3) << std::endl;

	return 0;
}

