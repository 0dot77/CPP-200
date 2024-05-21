// cpp-200-165.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

auto func1 = []() {std::cout << "Lamda Function" << std::endl; };
auto func2 = [](int x, int y) -> bool {return x < y; };


int main()
{
	int x = 2;

	auto func3 = [=](int y)
		{
			func1();
			std::cout << "x < y = " << func2(x, y) << std::endl;
		};

	func3(4);

	auto func4 = [=](int y) { return x * x + y * y; };

	std::cout << "x * x + y * y" << func4(5) << std::endl;

	return 0;
}


