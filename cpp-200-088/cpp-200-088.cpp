// cpp-200-088.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Princess
{
    string name;
    string father;
    string birthday = "�� �� ����";
} Goreyo[2];

int main()
{
    Princess jungmyung;
    jungmyung.name = "�������";
    jungmyung.father = "���� ����";
    jungmyung.birthday = "1603�� 6�� 27��";

    Goreyo[0].name = "��������";
    Goreyo[0].father = "��� ����";
    Goreyo[1].name = "ȿ������";
    Goreyo[1].father = "��� ����";

    cout << "== ���� ���� ==" << endl;
    cout << jungmyung.name << endl;
    cout << jungmyung.father << endl;
    cout << jungmyung.birthday << endl;

    cout << "== ��� ���� ==" << endl;
    cout << Goreyo[0].name << endl;
    cout << Goreyo[0].father << endl;
    cout << Goreyo[0].birthday << endl;
    cout << Goreyo[1].name << endl;
    cout << Goreyo[1].father << endl;
    cout << Goreyo[1].birthday << endl;
}

