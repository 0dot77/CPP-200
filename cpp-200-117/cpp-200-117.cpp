// cpp-200-117.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class LandLoad
{
public:
    void IanLandLoad()
    {
        cout << "�ǹ����Դϴ�." << endl;
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
        cout << "�ȳ��ϼ���. ";
        IanLandLoad();
    }
};

int main()
{
    Nation nation;
    nation.Who();

    return 0;
}

