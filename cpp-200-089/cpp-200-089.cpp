// cpp-200-089.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Princess
{
    string name;
    string father;
    string birthday;
} jungso;

void Print(Princess* who) // 포인터 변수로 주소를 받아서 사용한다.
{
    cout << "jungso.name = " << who->name << endl; // 포인터 변수는 -> 를 활용해서 맴버에 바로 접근할 수 있다.
    cout << "jungso.father = " << who->father << endl;
    cout << "jungso.birthday = " << who->birthday << endl;
}

int main()
{
    jungso.name = "정소공주";
    jungso.father = "조선 태종";
    jungso.birthday = "1412년";

    Print(&jungso); // 구조체는 일반 변수처럼 여겨진다. 따라서 주소 연산자를 사용해서 주소를 전달한다.

    return 0;
}

