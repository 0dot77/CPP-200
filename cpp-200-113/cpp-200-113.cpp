// cpp-200-113.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
    KingInfo() {};

    void SetValue(const string name, const string son, const int ascend) { _name = name; _son = son; _ascend = ascend; };

    string GetNameSon() const { return _name + "의 아들 " + _son; };

    string GetNameAscen() const { return _name + "즉위 연도 " + to_string(_ascend) + "년"; };

private:
    string _name;
    string _son;
    int _ascend;
};

int main()
{
    KingInfo king_info;
    king_info.SetValue("선조", "광해군", 1567);

    cout << king_info.GetNameSon() << endl;
    cout << king_info.GetNameAscen() << endl;

    return 0;
}

