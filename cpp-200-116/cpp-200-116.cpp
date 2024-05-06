// cpp-200-116.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class LandLoad
{
public:
    void IamLandLoad() {
        cout << "건물주 입니다." << endl;
    }

};

class Tenant
{
public:
    void IamTenant()
    {
        cout << "세입자입니다. " << endl;
    }
};

class Nation : public LandLoad, public Tenant
{
public:
    void Who()
    {
        cout << "저는 ";

        if (is_landload == true)
        {
            IamLandLoad();
        }
        else 
        {
            IamTenant();
        }
    }

    bool is_landload;
};

int main()
{
    Nation nation;
    nation.is_landload = true;
    nation.Who();

    return 0;
}

