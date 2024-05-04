// cpp-200-112.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
    KingInfo() {};

    void SetValue(const string value)
    {
        if (value.empty() == false)
            _value = value;
        else
            cout << "잘못된 인자!" << endl;
    }

    string GetValue() const
    {
        if (_value.empty() == false)
            return _value;
        else
            return "설정을 먼저 해주세요";
    }

private:
    string _value;
    int _number;
};

int main()
{
    KingInfo king_info1;
    king_info1.SetValue("조선 중종 이역");

    KingInfo king_info2;
    king_info2.SetValue("조선 인종 이호");


    cout << king_info1.GetValue() << endl;
    cout << king_info2.GetValue() << endl;

    return 0;
}

