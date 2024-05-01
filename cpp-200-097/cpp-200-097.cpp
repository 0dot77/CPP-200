// cpp-200-097.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <filesystem>

using namespace std;


int main()
{
	cout << "프로젝트 폴더 : " << filesystem::current_path() << endl;

	return 0;
}

