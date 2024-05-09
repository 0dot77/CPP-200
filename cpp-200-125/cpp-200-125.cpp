// cpp-200-125.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <type_traits>

using namespace std;

template <typename T1, typename T2>

string TmpFunc(T1 x, T2 y)
{
    typename conditional<is_same<T1, T2>::value, int, double>::type type1;

    return typeid(type1).name();
}

int main()
{
    string type = TmpFunc(1, 22.3);

    if (type == "double")
        cout << "double 자료형입니다." << endl;
    else
        cout << "double 자료형이 아닙니다." << endl;
    
    return 0;
}

