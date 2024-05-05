// cpp-200-114.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Info
{
public:
    Info() {};
    string _name;
    int _year;
};

class GoodKing : public Info
{
public:
    GoodKing(const string country) : _country(country) {};

    void Display()
    {
        cout << _country << " " << _name << " 즉위 연도 BC : " << _year << endl;
    }

private:
    string _country;
};

class BadKing : public Info
{
public:
    BadKing(const string country) : _country(country) {};

    void Display() 
    { 
        cout << _country << " " << _name << " 즉위 연도 : " << _year << endl;
    }

private:
    string _country;
};

int main()
{
    GoodKing king1("고조선");
    king1._name = "단군왕검";
    king1._year = 2333;

    BadKing king2("고려");
    king2._name = "충혜왕";
    king2._year = 1330;

    king1.Display();
    king2.Display();

    return 0;
}

