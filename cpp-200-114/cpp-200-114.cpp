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
        cout << _country << " " << _name << " ���� ���� BC : " << _year << endl;
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
        cout << _country << " " << _name << " ���� ���� : " << _year << endl;
    }

private:
    string _country;
};

int main()
{
    GoodKing king1("������");
    king1._name = "�ܱ��հ�";
    king1._year = 2333;

    BadKing king2("���");
    king2._name = "������";
    king2._year = 1330;

    king1.Display();
    king2.Display();

    return 0;
}

