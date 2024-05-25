// cpp-200-168.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>



int main()
{
	std::vector<int> data({ 10,20,30,40 });
	std::cout << "== for_each 람다 ==" << std::endl;

	std::for_each(data.begin(), data.end(), [](int i)
		{
			std::cout << i << ", ";
		});

	std::cout << std::endl << "== for_each 람다 함수1 ==" << std::endl;

	auto Print = [](int x) {std::cout << x + x << ", "; };

	std::for_each(data.begin(), data.end(), Print);

	std::cout << std::endl << "== for_each 람다 함수2 ==" << std::endl;

	int y = 11;
	
	for_each(data.begin(), data.end(), [y](int x) {std::cout << x + y << " ,"; });

	return 0;
}

