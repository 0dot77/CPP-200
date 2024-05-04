// cpp-200-106.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
    KingInfo()
    {
        _value = "조선 성종 이혈";
    };

    KingInfo(const string value)
    {
        _value = value;
    };

    KingInfo(const int value)
    {
        _value = "연산군 즉위연도 : ";
        _value += to_string(value);
    };

    string GetValue() const
    {
        return _value;
    }

private:
    string _value;
};

int main()
{
    KingInfo king_info1;
    KingInfo king_info2("조선 연산군 이융");
    KingInfo king_info3(1494);

    cout << king_info1.GetValue() << endl;
    cout << king_info2.GetValue() << endl;
    cout << king_info3.GetValue() << endl;

    return 0;
}

