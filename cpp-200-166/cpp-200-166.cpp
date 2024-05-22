// cpp-200-166.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int number = 4;

	std::vector<int> data{ 4,1,3,5,2,3,1,7 };

	std::vector<int>::iterator result1 = std::find_if(data.begin(), data.end(), [number](int i)
		{
			return i > number;
		});

	std::cout << "4보다 큰 첫 번째 정수 : " << *result1 << std::endl;

	auto result2 = std::count_if(data.begin(), data.end(), [number](int i)
		{
			return i > number;
		});

	std::cout << "4보다 큰 정수 개수 : " << result2 << std::endl;

	return 0;
}

