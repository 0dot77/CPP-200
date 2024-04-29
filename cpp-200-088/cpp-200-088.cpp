// cpp-200-088.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Princess
{
    string name;
    string father;
    string birthday = "알 수 없음";
} Goreyo[2];

int main()
{
    Princess jungmyung;
    jungmyung.name = "정명공주";
    jungmyung.father = "조선 선조";
    jungmyung.birthday = "1603년 6월 27일";

    Goreyo[0].name = "선정왕후";
    Goreyo[0].father = "고려 성종";
    Goreyo[1].name = "효정공주";
    Goreyo[1].father = "고려 현종";

    cout << "== 조선 공주 ==" << endl;
    cout << jungmyung.name << endl;
    cout << jungmyung.father << endl;
    cout << jungmyung.birthday << endl;

    cout << "== 고려 공주 ==" << endl;
    cout << Goreyo[0].name << endl;
    cout << Goreyo[0].father << endl;
    cout << Goreyo[0].birthday << endl;
    cout << Goreyo[1].name << endl;
    cout << Goreyo[1].father << endl;
    cout << Goreyo[1].birthday << endl;
}

