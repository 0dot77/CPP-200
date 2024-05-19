// cpp-200-159.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

void Print(const std::array<int, 3>& data)
{
    std::cout << "== Print ==" << std::endl;

    for (auto iter = data.begin(); iter != data.end(); ++iter)
    {
        std::cout << *iter << ", ";
    }

    std::cout << std::endl;
}

int main()
{
    std::array<int, 3> data1{ 10, 2, 5 };
    std::array<int, 3> data2;
    data2.fill(0);
    data2.at(1) = 200;

    Print(data2);

    std::copy(data1.begin(), data1.end(), data2.begin());
    Print(data1);
    Print(data2);

    return 0;
}

