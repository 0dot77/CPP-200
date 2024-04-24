// cpp-200-076.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void Func1(bool* is_on)
{
    cout << "Call by address : " << sizeof(is_on) << endl;
}

void Func2(bool& is_on)
{
    cout << "Call by refernce : " << sizeof(is_on) << endl;
}

int main()
{
    bool is_tmp = true;

    Func1(&is_tmp); // 8 바이트
    Func2(is_tmp); // 1 바이트

    return 0;
}

