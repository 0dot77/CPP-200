// cpp-200-141.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

namespace MyArea
{
    int Plus(int x, int y)
    {
        return x + y;
    }
}

using namespace MyArea;
using MyVector = std::vector<int>;

int main()
{
    MyVector data;
    data.push_back(1);
    data.push_back(2);

    std::cout << "Data : " << data.at(0) << ", " << data.at(1) << std::endl;
    std::cout << "Plus : " << Plus(2, 4) << std::endl;

    return 0;
}

