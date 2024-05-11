// cpp-200-142.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int GetInt()
{
	return 1;
}

double GetDouble()
{
	return 1.11;
}

std::string GetString()
{
	return "3";
}

auto add(int x, int y) -> int
{
	return x + y;
}

int main()
{
	auto data1 = GetInt();
	auto data2 = GetDouble();
	auto data3 = GetString();
	auto data4 = add(5.1, 10.2);

	std::cout << "Data1 : " << data1 << ", " << typeid(data1).name() << std::endl;
	std::cout << "Data2 : " << data2 << ", " << typeid(data2).name() << std::endl;
	std::cout << "Data3 : " << data3 << ", " << typeid(data3).name() << std::endl;
	std::cout << "Data4 : " << data4 << ", " << typeid(data4).name() << std::endl;

	return 0;
}

