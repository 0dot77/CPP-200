// cpp-200-117.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class LandLoad
{
public:
    void IanLandLoad()
    {
        cout << "건물주입니다." << endl;
    }
};

class MaleMonkey
{
public:
    void Favorite()
    {
        cout << "Favorite : Female Monkey" << endl;
    }
};

class Nation : public LandLoad
{
public:
    void Who()
    {
        cout << "안녕하세요. ";
        IanLandLoad();
    }
};

int main()
{
    Nation nation;
    nation.Who();

    return 0;
}

