// cpp-200-164.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

int main()
{
	std::bitset<4> data1(6); // 0110
	std::bitset<4> data2(0x09); // 1001

	auto result = data1 | data2; // 1111
	std::cout << "data1 | data2" << result << std::endl;
	
	result = data1 & data2; // 0000
	std::cout << "data1 & data2 = " << result << std::endl;

	result = data1 ^ data2; // 1111
	std::cout << "data1 ^ data2 = " << result << std::endl;

	result = data1 << 1; // 1100
	std::cout << "data1 << 1 = " << result << std::endl;

	result = data1 >> 1; // 0011
	std::cout << "data1 >> 1 = " << result << std::endl;

	result = ~data1; //1001
	std::cout << "~data1 = " << result << std::endl;

	return 0;
}

