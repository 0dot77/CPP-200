// cpp-200-098.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <filesystem>

using namespace std;

int main()
{
	if (filesystem::exists("c:\\Target") == true)
		cout << "������ �����մϴ�" << endl;
	else
		cout << "������ �����ϴ�" << endl;
	return 0;
}

