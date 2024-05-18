// cpp-200-156.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

void Print(const std::list<int>& data)
{
    std::cout << "== Print ==" << std::endl;

    for (auto iter = data.begin(); iter != data.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    std::list<int> data1({ 1,2,3,2 });
    data1.push_back(3);
    data1.sort();

    Print(data1);

    data1.unique();

    Print(data1);

    std::list<int> data2 = { 4,5,6 };

    data2.merge(data1);

    Print(data2);

    return 0;
}

