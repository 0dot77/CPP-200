// cpp-200-121.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Base
{
public:
    void Display()
    {
        cout << "��� 16��� ����" << endl;
    }
};

class Derived : Base
{
public:
    void Display()
    {
        cout << "��� 17��� ����" << endl;
    }
};

int main()
{
    Derived child;
    child.Display();

    return 0;
}

