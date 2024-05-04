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
        cout << "생성자 호출" << endl;
    }

    ~TempClass()
    {
        cout << "소멸자 호출" << endl;
    }
};

int main()
{
    TempClass* temp_class = new TempClass();

    delete temp_class;
    temp_class = nullptr;

    return 0;
}

