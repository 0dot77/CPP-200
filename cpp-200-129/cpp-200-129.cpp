// cpp-200-129.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdarg.h>


using namespace std;

int Sum(int arg, ...)
{
	va_list ap;
	va_start(ap, arg);

	int sum = 0;

	for (int i = 0; i < arg; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return sum;
}
int main()
{
	int n = Sum(5, 1, 2, 3, 4, 5);

	cout << "1���� 5���� �� : " << n << endl;

	return 0;
}

