// cpp-200-075.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void Func1(int& arg)
{
    cout << "변경 전 : " << arg << endl;
    arg += 10;
    cout << "변경 후 : " << arg << endl; 
}

void Func2(string& info)
{
    info += "981년";
}


int main()
{
    int year = 10;

    Func1(year);

    cout << "Func1 함수 종료 후 : " << year << endl;

    string king_info = "고려 성종 즉위 년 : ";

    Func2(king_info);

    cout << king_info << endl;

    return 0;
}

