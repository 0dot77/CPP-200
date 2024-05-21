// cpp-200-163.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>
#include <string>

int main()
{
	std::bitset<8> data1(1);
	std::bitset<8> data2(0x01);

	std::cout << "data1 : " << data1 << std::endl;
	std::cout << "data2 : " << data2 << std::endl;

	data1.set(0, false);
	data1.set(2, 1);

	std::cout << std::endl << "== data1 ==" << std::endl;
	std::cout << "data1 : " << data1 << std::endl;

	data2[4] = false;
	data2.flip(5);

	std::cout << std::endl << "== data2 ==" << std::endl;
	std::cout << "data2 : " << data2 << std::endl;

	std::string data1_str = data1.to_string();
	int data2_int = data2.to_ulong();

	std::cout << std::endl << "== 변환 ==" << std::endl;
	std::cout << "data1 : " << data1 << std::endl;
	std::cout << "data2 : " << data2 << std::endl;

	return 0;

}

