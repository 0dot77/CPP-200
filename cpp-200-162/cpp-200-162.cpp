// cpp-200-162.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>
#include <string>

int main()
{
	std::bitset<8> data1(100);
	std::bitset<8> data2(0x78);
	std::bitset<8> data3(std::string("11110000"));

	std::cout << "data1 : " << data1 << std::endl;
	std::cout << "data2 : " << data2 << std::endl;
	std::cout << "data3 : " << data3 << std::endl;

	data1.set();

	std::cout << std::endl << "== data1 ==" << std::endl;
	std::cout << "data1 all: " << data1.all() << '\n';
	std::cout << "data1 any: " << data1.any() << '\n';
	std::cout << "data1 none: " << data1.none() << '\n';

	data2.reset();

	std::cout << std::endl << "== data2 ==" << std::endl;
	std::cout << "data1 all: " << data2.all() << '\n';
	std::cout << "data1 any: " << data2.any() << '\n';
	std::cout << "data1 none: " << data2.none() << '\n';

	return 0;
}

