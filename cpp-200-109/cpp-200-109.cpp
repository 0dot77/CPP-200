// cpp-200-109.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class TempClass
{
public:
    TempClass()
    {
        cout << "������ ȣ��" << endl;
    }

    ~TempClass()
    {
        cout << "�Ҹ��� ȣ��" << endl;
    }
};

int main()
{
    TempClass* temp_class = new TempClass();

    delete temp_class;
    temp_class = nullptr;

    return 0;
}

