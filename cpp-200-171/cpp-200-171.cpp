// cpp-200-171.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

bool EvenOdd(int arg)
{
	return arg % 2 == 0 ? true : false;
}

int main()
{
	std::vector<int> data = { 8,27,35,49 };

	if (std::any_of(data.begin(), data.end(), EvenOdd))
		std::cout << "data : 짝수가 존재합니다." << std::endl;

	if (std::any_of(data.begin(), data.end(), [](int i) { return i < 10; }))
		std::cout << "data : 10보다 작은 수가 존재합니다." << std::endl;
}

