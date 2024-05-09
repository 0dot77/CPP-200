// cpp-200-128.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void Type1(string msg, int no, double value)
{
    cout << msg << ", 에러 번호 " << no << ", 오류값 " << value << endl;
}

void Type2(int no, double value)
{
    cout << no << ", 오류값 " << value << endl;
}

template<typename... T>
void PrintLog(T... arg0)
{
    Type1(arg0...);
}

int main()
{
    PrintLog<string, int, double>("Warning", 100, 22.5);
    return 0;
}

