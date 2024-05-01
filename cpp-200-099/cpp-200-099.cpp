// cpp-200-099.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <filesystem>

using namespace std;

int main()
{
	string directory = "C:\\Program Files";

	for (auto& name : filesystem::directory_iterator(directory))
		cout << name << '\n';

	return 0;
}

