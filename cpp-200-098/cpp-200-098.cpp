// cpp-200-098.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <filesystem>

using namespace std;

int main()
{
	if (filesystem::exists("c:\\Target") == true)
		cout << "폴더가 존재합니다" << endl;
	else
		cout << "폴더가 없습니다" << endl;
	return 0;
}

