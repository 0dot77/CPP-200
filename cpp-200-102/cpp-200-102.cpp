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
		cout << "������ �����մϴ�" << endl;
	else
		cout << "������ �����ϴ�" << endl;

	stream.close();
	
	return 0;
}

