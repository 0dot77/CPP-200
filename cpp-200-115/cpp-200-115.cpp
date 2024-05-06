// cpp-200-115.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Building1
{
public:
    void Name() {
        cout << "노른자 위 좋은 건물" << endl;
    }
};

class BuildingOwner : public Building1
{
public:
    void MyBuilding()
    {
        cout << "내 보물" << endl;
        Name();
    }
};

int main()
{
    BuildingOwner envious;
    envious.MyBuilding();

    return 0;
}

