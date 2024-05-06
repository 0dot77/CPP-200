// cpp-200-120.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int Plus(int arg1, int arg2)
{
	return arg1 + arg2;
}

double Plus(double arg1, double arg2, double arg3)
{
	return arg1 + arg2 + arg3;
}

int main()
{
	int number1 = Plus(2, 4);
	double number2 = Plus(3.4, 5.7, 8.4);

	cout << "number 1 : " << number1 << endl;
	cout << "number 2 : " << number2 << endl;

	return 0;
}

