// cpp-200-172.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> data = { 8,27,35,49 };

	bool is_small = std::any_of(data.begin(), data.end(), [](int i) {return i < 100; });
	bool is_zero = std::any_of(data.begin(), data.end(), [](int i) {return i != 0; });

	if (is_small == true && is_zero)
		std::cout << "data 자료는 모두 100보다 작고 0이 아닙니다." << std::endl;

	return 0;
}

