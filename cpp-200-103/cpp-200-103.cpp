// cpp-200-103.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <filesystem>

using namespace std;

int main()
{
	int size = filesystem::file_size("연개수영 전설.txt");

	cout << "파일 크기 : " << size << "바이트" << endl;

	return 0;
}

