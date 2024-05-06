// cpp-200-118.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class GoodKing;
class BadKing;

class Info
{
    friend class GoodKing;

public:
    Info() {};

private:
    string achieve;
};

class GoodKing : Info
{
public:
    GoodKing() {
        achieve = "πÈ¡¶ ¡ﬂ»Ô ±∫¡÷ ±Ÿ√ ∞Ìø’";
    }

    void Display()
    {
        cout << achieve << endl;
    }
};

class BadKing : public Info
{
public:
    BadKing() {};
    void Display()
    {

    }
};

int main()
{
    GoodKing king1;
    king1.Display();

    BadKing king2;
    king2.Display();

    return 0;
}

