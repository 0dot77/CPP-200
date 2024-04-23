// cpp-200-073.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

extern int g_number = 100;

int Func1()
{
    return g_number++;
}

int Func2()
{
    return g_number++;
}

int main()
{
    int number = g_number++;

    cout << "¸ÞÀÎ number : " << number << endl;
    cout << "Func1 number : " << Func1() << endl;
    cout << "Func2 number : " << Func2() << endl;

    return 0;
}
