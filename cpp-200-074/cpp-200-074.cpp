// cpp-200-074.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void Func(int arg)
{
	cout << "���� �� : " << arg << endl;
	arg += 10;
	cout << "���� �� : " << arg << endl;
}

int main()
{
	int year = 10;

	Func(year);

	cout << "�Լ� ���� �� : " << year << endl;

	return 0;
}

