// cpp-200-143.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	auto data1 = 1;
	decltype(data1) data2 = 2;
	
	auto data3 = 3.4;
	decltype(data2 + data3) data4 = 3;

	std::cout << "Data1 : " << data1 << ", " << typeid(data1).name() << std::endl;
	std::cout << "Data2 : " << data2 << ", " << typeid(data2).name() << std::endl;
	std::cout << "Data3 : " << data3 << ", " << typeid(data3).name() << std::endl;
	std::cout << "Data4 : " << data4 << ", " << typeid(data4).name() << std::endl;

	return 0;
}

