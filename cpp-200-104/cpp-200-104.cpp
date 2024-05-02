// cpp-200-104.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
    void SetName(string name)
    {
        name_ = name;
    }

    string GetName() const
    {
        return name_;
    }

private:
    string name_;
};

int main()
{
    KingInfo king_info;
    king_info.SetName("조선 세조 이유");

    cout << king_info.GetName() << endl;

    return 0;
}

