// cpp-200-154.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> number1({ 1,2,3,4,5 });
	std::vector<int> number2;

	std::copy(number1.begin(), number1.end(), std::back_inserter(number2));

	for (auto i : number2)
		std::cout << i << std::endl;

	double number3[5] = { 1.2, 3.4, 4.5, 5.6, 6.77 };
	double number4[5];

	std::copy(std::begin(number3), std::end(number3), std::begin(number4));

	for (auto i : number4)
		std::cout << i << std::endl;

	return 0;
}

