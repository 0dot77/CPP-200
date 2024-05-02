// cpp-200-102.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream stream;
	stream.open("C:\\BOOTNXT");

	if (stream.good() == true)
		cout << "파일이 존재합니다" << endl;
	else
		cout << "파일이 없습니다" << endl;

	stream.close();
	
	return 0;
}

