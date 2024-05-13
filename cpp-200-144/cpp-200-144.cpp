// cpp-200-144.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

constexpr int GetNumber1()
{
    return 2;
}

constexpr int GetNumber2(int x, int y)
{
    return x + y;
}

int main()
{
    int array1[GetNumber1()];
    int array2[GetNumber2(1, 2)];

    std::cout << sizeof(array1) << ", " << sizeof(array2) << std::endl;

    return 0;
}

