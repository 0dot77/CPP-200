// cpp-200-094.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream file;
	file.open("093.txt", ifstream::in);

	string line;

	while (getline(file, line))
		cout << line << endl;

	file.close();

	return 0;
}

