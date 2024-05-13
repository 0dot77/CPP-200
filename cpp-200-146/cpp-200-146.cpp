// cpp-200-146.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>
#include <string>

int main()
{
	typedef std::tuple<std::string, int, double> Data;

	Data data1("문자열", 10, 1.2);
	auto data2 = std::make_tuple("문자열", 10, 1.2);

	std::cout << std::get<0>(data1) << ", " << std::get<1>(data1) << " , " << std::get<2>(data1) << std::endl;

}

