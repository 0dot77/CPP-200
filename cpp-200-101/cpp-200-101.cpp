// cpp-200-101.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <filesystem>
#include <string>

using namespace std;

int main()
{
	filesystem::copy("�������� ����.txt", "(����)�������� ����.txt");
	filesystem::remove("�������� ����.txt");

	return 0;
}




