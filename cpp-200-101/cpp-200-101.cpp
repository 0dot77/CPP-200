// cpp-200-101.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <filesystem>
#include <string>

using namespace std;

int main()
{
	filesystem::copy("연개수영 전설.txt", "(복사)연개수영 전설.txt");
	filesystem::remove("연개수영 전설.txt");

	return 0;
}




