// cpp-200-100.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;

int main()
{
	filesystem::create_directory("temp");
	filesystem::copy("temp", "temp_copy");
	filesystem::remove("temp");
	filesystem::remove("temp_copy");

	return 0;
}

