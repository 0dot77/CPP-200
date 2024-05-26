// cpp-200-170.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main()
{
	std::vector<int> data1 = { 1,3,5,7 };
	std::vector<std::string> data2 = { "ab", "cd", "ef" };

	if (std::all_of(data1.begin(), data1.end(), [](int i) {return i % 2; }))
		std::cout << "data1 : 모두 홀수입니다." << std::endl;

	if (std::all_of(data1.begin(), data1.end(), [](int i) {return i < 10; }))
		std::cout << "data1 : 모두 10보다 작습니다." << std::endl;

	if (std::all_of(data2.begin(), data2.end(), [](std::string i) {return i.length() < 4 ? true : false; }))
		std::cout << "data2 : 모두 길이가 4 이하입니다." << std::endl;

	if (std::all_of(data2.begin(), data2.end(), [](std::string i) {return i.find('A'); }))
		std::cout << "data2 : 모두 문자 A를 포함하지 않습니다." << std::endl;

	return 0;
}

