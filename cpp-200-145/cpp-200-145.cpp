// cpp-200-145.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	std::pair<std::string, int> data("백제 근초고왕", 13);

	std::cout << data.first << " " << data.second << "대왕" << std::endl;

	return 0;
}

