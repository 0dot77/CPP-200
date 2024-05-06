// cpp-200-119.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Ondal {
public:
    friend void GetYear(Ondal ondal)
    {
        cout << "야단성 전투 연도 : " << ondal._year << endl;
    }

    void SetYear(int year)
    {
        _year = year;
    }

private:
    int _year;
};

int main()
{
    Ondal ondal;
    ondal.SetYear(590);

    GetYear(ondal);

    return 0;
}

