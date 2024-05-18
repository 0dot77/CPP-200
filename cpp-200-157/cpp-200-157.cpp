// cpp-200-157.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

void Print(const std::list<int>& data)
{
    std::cout << "== Print ==" << std::endl;

    for (auto iter = data.begin(); iter != data.end(); ++iter)
    {
        std::cout << *iter << ", ";
    }

    std::cout << std::endl;
}

bool IsOdd(int arg)
{
    return arg % 2 == 0 ? 0 : 1;
}

int main()
{
    std::list<int> data1({ 1,2,4,2,7,10,13,14 });

    data1.remove(2);
    data1.remove_if(IsOdd);

    Print(data1);

    data1.reverse();

    Print(data1);

    return 0;
}

